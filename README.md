# Temperature-Monitoring-system-using-Atmega16-and-LM35
This is a temperature monitoring system using ATMEGA16 and LM35 temperature sensor. This project uses my previous repositories LCD and ADC library and it is simulated using Proteus.

This Project is successfully simulated using Proteus and I will implement this in hardware very soon.

It uses
  Atmega16 controller,
  16x2 Alphanumeric LCD display,
  LM35 temperature sensor.
  
This LM35 sensor is a analog sensor which gives analog signals based on the temperature.

Atmega16's 10 bit ADC is used to convert this analog signal in to digital and therefore corresponding voltage value can be read.

With some basic calculations we can convert the voltage value in to corresponding temperature.

The measured temperature will be displayed using LCD display
# Libraries Used
You can find the libraries in my repository,
  Udayanan08/ADC_ATMEGA16,
  Udayanan08/Atmega16-16x2-Alphanumeric-library.
  
The above libraries are created in atmel studio 7.0. You can also refer this.


# Proteus simulation
[https://github.com/Udayanan08/Temperature-Monitoring-system-using-Atmega16-and-LM35/blob/master/proteus_simulation.mp4]



___________________________________________________________________________________________________________________________________________
