#pragma config(StandardModel, "GTT Testbed")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	startMotor(port3,-100);
	startMotor(port2,100);
	wait(2);
	stopMotor(port3);
	stopMotor(port2);
}
