#pragma config(StandardModel, "GTT Testbed")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	repeat(forever)
		if(SensorValue(dgtl2)== 1) {
			startMotor (port3,-68);
			startMotor (port2,68);
		if(SensorValue(dgtl2)== 1) {
			stopMotor (port2);
			stopMotor (port3);
		}
	}
}
