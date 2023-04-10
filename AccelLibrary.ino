// Include the AccelStepper Library
#include <AccelStepper.h>

// Define pin connections
const int dirPin = 5;
const int stepPin = 2;
const int dirPin1 = 6;
const int stepPin1 = 3;

// Define motor interface type
#define motorInterfaceType 1

// Creates an instance
AccelStepper myStepper(motorInterfaceType, stepPin, dirPin);
AccelStepper myStepper1(motorInterfaceType, stepPin1, dirPin1);

void setup() {
	// set the maximum speed, acceleration factor,
	// initial speed and the target position
	myStepper.setMaxSpeed(1000);
	myStepper.setAcceleration(1000);
	myStepper.setSpeed(1000);
	myStepper.moveTo(1200);
	myStepper1.setMaxSpeed(1000);
	myStepper1.setAcceleration(1000);
	myStepper1.setSpeed(1000);
	myStepper1.moveTo(1500);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, LOW);
	// Change direction once the motor reaches target position
	if (myStepper.distanceToGo() == 0) 
		myStepper.moveTo(-myStepper.currentPosition());
	if (myStepper1.distanceToGo() == 0) 
		myStepper1.moveTo(-myStepper.currentPosition());
	// Move the motor one step
	myStepper.run();
	myStepper1.run();
}
