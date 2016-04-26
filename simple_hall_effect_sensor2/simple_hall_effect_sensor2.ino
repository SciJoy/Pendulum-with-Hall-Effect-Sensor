/*#include SoftwareSerial.h*/

int sensor1Pin = 4;
float sensorVals[] = {0};

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(hallEffect, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  sensorVal[4] = digitalRead(sensor1Pin);

 Serial.print(sensors[0]);
  delay(100);       
}
