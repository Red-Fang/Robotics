#pragma config(StandardModel, "GTT Testbed")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	startMotor(port2,127);
	startMotor(port3,-127);
	wait(3);
	stopMotor(port2);
	stopMotor(port3);
	wait(1.5);
	startMotor(port2,-127);
	startMotor(port3,-80);
	wait(9.69);
	stopMotor(port2);
	stopMotor(port3);
	wait(1.2);
	startMotor(port2,127);
	startMotor(port3,-127);
	wait(1);
	stopMotor(port2);
	stopMotor(port3);
}