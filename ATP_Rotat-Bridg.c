#pragma config(Sensor, dgtl1,  bumpswitch,     sensorTouch)
#pragma config(Sensor, dgtl9,  green,          sensorLEDtoVCC)
#pragma config(Sensor, dgtl10, yellow,         sensorLEDtoVCC)
#pragma config(Sensor, dgtl11, green,          sensorLEDtoVCC)
#pragma config(Motor,  port9,           rightmotor,    tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{repeat(forever)
{
turnLEDOff(dgtl9);
turnLEDOff(dgtl10);
turnLEDOff(dgtl11);
wait(3);

untilBump(dgtl1);
turnLEDOn(dgtl11);
startMotor(port9,-10);
wait(3);
stopMotor(port9);

untilBump(dgtl1);
turnLEDOff(dgtl11);
startMotor(port9,10);
wait(3);
stopMotor(port9);
}

}