#define VOLTAGE_CONTROL_C_
/*
 * voltage_control.c
 *
 * Created: 2017/01/04 10:55:12 AM
 *  Author: Philip
 */ 

 #include "../system.h"

 /*
    ____       _____       _ __  _
   / __ \___  / __(_)___  (_) /_(_)___  ____  _____
  / / / / _ \/ /_/ / __ \/ / __/ / __ \/ __ \/ ___/
 / /_/ /  __/ __/ / / / / / /_/ / /_/ / / / (__  )
/_____/\___/_/ /_/_/ /_/_/\__/_/\____/_/ /_/____/

*/

/*
    ____             __        __
   / __ \_________  / /_____  / /___  ______  ___  _____
  / /_/ / ___/ __ \/ __/ __ \/ __/ / / / __ \/ _ \/ ___/
 / ____/ /  / /_/ / /_/ /_/ / /_/ /_/ / /_/ /  __(__  )
/_/   /_/   \____/\__/\____/\__/\__, / .___/\___/____/
                               /____/_/
*/

void v_set_voltage(U16 voltage);
U16 us_interpret_adc_value(U16 raw_value);
/*
   ________      __          __   _    __           _       __    __
  / ____/ /___  / /_  ____ _/ /  | |  / /___ ______(_)___ _/ /_  / /__  _____
 / / __/ / __ \/ __ \/ __ `/ /   | | / / __ `/ ___/ / __ `/ __ \/ / _ \/ ___/
/ /_/ / / /_/ / /_/ / /_/ / /    | |/ / /_/ / /  / / /_/ / /_/ / /  __(__  )
\____/_/\____/_.___/\__,_/_/     |___/\__,_/_/  /_/\__,_/_.___/_/\___/____/

*/

/*
    ______     __                        __   ______                 __  _
   / ____/  __/ /____  _________  ____ _/ /  / ____/_  ______  _____/ /_(_)___  ____  _____
  / __/ | |/_/ __/ _ \/ ___/ __ \/ __ `/ /  / /_  / / / / __ \/ ___/ __/ / __ \/ __ \/ ___/
 / /____>  </ /_/  __/ /  / / / / /_/ / /  / __/ / /_/ / / / / /__/ /_/ / /_/ / / / (__  )
/_____/_/|_|\__/\___/_/  /_/ /_/\__,_/_/  /_/    \__,_/_/ /_/\___/\__/_/\____/_/ /_/____/

*/

void v_voltage_control_FSM(bool reset)
{
  SYS_MESSAGE message;
  static U16 set_voltage;

  if(reset)
  {
    b_queue_init(&queue_voltage_control, sizeof(SYS_MESSAGE), 2);
  }

  if(b_queue_read(&queue_voltage_control, &message))
  {
    switch(message.source)
    {
      case SRC_ADC:
      eus_output_voltage = us_interpret_adc_value(message.value);
      break;
      
      case SRC_SYS:
      case SRC_HMI:
      v_set_voltage(message.value);
      break;

    }
  }

  if(eus_output_voltage != set_voltage)
  {
    /* Display warning? */
  }
}

/*
    __                     __   ______                 __  _
   / /   ____  _________ _/ /  / ____/_  ______  _____/ /_(_)___  ____  _____
  / /   / __ \/ ___/ __ `/ /  / /_  / / / / __ \/ ___/ __/ / __ \/ __ \/ ___/
 / /___/ /_/ / /__/ /_/ / /  / __/ / /_/ / / / / /__/ /_/ / /_/ / / / (__  )
/_____/\____/\___/\__,_/_/  /_/    \__,_/_/ /_/\___/\__/_/\____/_/ /_/____/

*/

void v_set_voltage(U16 voltage)
{
  dac_SetVoltage(voltage);
}

U16 us_interpret_adc_value(U16 raw_value)
{
  /* Voltage Divider:
    R1 = 9K
    R2 = 1K

    Vsense = R2/(R1 + R2)Vin = 0.1Vout
    Vout = 10 Vsense

    ADC = Vsense*TOP/Vref 

    Vsense = ADC * VREF / TOP
      Vref = 3300 / 1.48
      Top = 4095 

  */
 
  U64 temp = raw_value * 10;
  temp *= 2230; /* mV */
  temp /= 4095;

  return (U16)(temp);
}