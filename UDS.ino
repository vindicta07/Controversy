// As I was not having Arduino UNO R3, it was not possible to execute in the Arduino IDE 
// Environment. Therefore, by the use of Online Simulators like WOKWI, I debugged and
// Executed the Program! 



// Including NewPing Library
// It is used to simplify the task of working with ultrasonic distance sensors,
// particularly the HC-SR04 ultrasonic sensor and other compatible models. 
#include "NewPing.h"

// Hook up HC-SR04 with Trig to Arduino Pin 10, Echo to Arduino pin 9!
#define TRIGGER_PIN 10
#define ECHO_PIN 9

// Maximum distance we want to ping for (in centimeters).
#define MAX_DISTANCE 350	

// NewPing setup of trigger_pin, echo_pin and maximum_distance! 
NewPing hc(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
	Serial.begin(9600);
}

void loop() {
	Serial.print("Distance = ");
  unsigned int distance = ((hc.ping() / 2) * 0.0343);
  // Special Condition or Formula for Measuring Obstacle Distance from the Ultrasonic Sensor!
	Serial.print(distance);
	Serial.println(" cm");
  delay(1000);
}
