#pragma config(StandardModel, "GTT Testbed")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	  repeat(forever){
	if(SensorValue[in1] <=2000)
  startMotor(port2,-100);
	startMotor(port3,100);
	else{SensorValue[in1] <=2000)
    stopMotor(port2);
		stopMotor(port3);
 }
}
