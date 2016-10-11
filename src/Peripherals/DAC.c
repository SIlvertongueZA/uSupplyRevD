/*
 * DAC.c
 *
 * Created: 2016/10/11 8:33:27 PM
 *  Author: philb
 */ 

 #include <asf.h>

 /*
 Variables
 */

const static U8 DeviceAddress = 0xC0;
U8 config;
U16 vref;

/*
Prototypes
*/

bool WriteVolatileDACRegister(U16 level);
bool WriteVolatileMemory(U16 level);
bool WriterAllMemory(U16 level);

/*
External Functions
*/

void SetReference(DAC_VREF ref, U16 value)
{
  config &= ~(0x18);
  config |= ref;

  vref = value;

  WriteConfig(config);
}

void SetVoltage(U16 level)
{
  WriteVolatileDACRegister(level / 20);
}

/*
Local Functions
*/

bool WriteVolatileDACRegister(U16 level)
{
  U8 buffer[2];

  level &= 0x3FF;
  level = level << 2;

  buffer[0] = (U8)(level >> 8);
  buffer[1] = (U8)(0xFF & level);

  struct i2c_master_packet packet = {
    .address     = DeviceAddress,
    .data_length = 2,
    .data        = buffer,
    .ten_bit_address = false,
    .high_speed      = false,
    .hs_master_code  = 0x0,
  };

  return i2c_master_write_packet_wait(&i2c_master_instance, &packet);
}

bool WriteVolatileMemory(U16 level)
{
  U8 buffer[3];
  buffer[0] = MCP47X6_CMD_VOLALL | config;

  level &= 0x3FF;
  level = level << 6;

  buffer[1] = level >> 8;
  buffer[2] = (0xFF & level);

  struct i2c_master_packet packet = {
    .address     = DeviceAddress,
    .data_length = 3,
    .data        = buffer,
    .ten_bit_address = false,
    .high_speed      = false,
    .hs_master_code  = 0x0,
  };

  return i2c_master_write_packet_wait(&i2c_master_instance, &packet);
}

bool WriterAllMemory(U16 level)
{
  U8 buffer[3];
  buffer[0] = MCP47X6_CMD_ALL | config;

  level &= 0x3FF;
  level = level << 6;

  buffer[1] = level >> 8;
  buffer[2] = (0xFF & level);


  struct i2c_master_packet packet = {
    .address     = DeviceAddress,
    .data_length = 3,
    .data        = buffer,
    .ten_bit_address = false,
    .high_speed      = false,
    .hs_master_code  = 0x0,
  };

  return i2c_master_write_packet_wait(&i2c_master_instance, &packet);
}

bool WriteConfig(U8 c)
{
  c |= MCP47X6_CMD_VOLCONFIG;

  struct i2c_master_packet packet = {
    .address     = DeviceAddress,
    .data_length = 1,
    .data        = &c,
    .ten_bit_address = false,
    .high_speed      = false,
    .hs_master_code  = 0x0,
  };

  return i2c_master_write_packet_wait(&i2c_master_instance, &packet);
}