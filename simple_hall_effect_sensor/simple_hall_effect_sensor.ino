int state = 0; //The state of the Hall Effect sensor is either a 1 or a 0. It is defined as a integer and set to zero initially. (https://www.arduino.cc/en/Reference/Int)
unsigned long time; //Time kept by the quartz ocsillator on the Arduino and is measured in milliseconds. This will be a large number. (https://www.arduino.cc/en/Reference/UnsignedLong)

void setup() {
  // put your setup code here, to run once:
pinMode(6,INPUT); //This says the Hall Effect Sensor is in pin 6 and is an input. (https://www.arduino.cc/en/Reference/PinMode)
Serial.begin(9600); //This opens communication with the computer. 9600 is the Baud Rate, which is the speed data is sent in bits per second. (https://www.arduino.cc/en/Serial/Print)
}

void loop() {
  // put your main code here, to run repeatedly:
state = digitalRead(6); //Reads data from digital pin 6 where the Hall Effect sensor is hooked up. We set this equal to state so it can be sent to the computer. (https://www.arduino.cc/en/Reference/DigitalRead)
time = millis (); //Records time elaspsed since start of program in milliseconds. (https://www.arduino.cc/en/Reference/Millis)

Serial.print(time); //This prints out the current value of time recorded in the line above. (https://www.arduino.cc/en/Serial/Print)
Serial.print(", "); //This prints out a comma and space, which will be easier to read and easier to split into column in Google Sheets.
Serial.println(state); //The ln creates a hard return. (https://www.arduino.cc/en/Serial/Println)

delay(100); //This delays the program form going back to the top of void loop instantly. This will space out the amount of data we recieve. (https://www.arduino.cc/en/Reference/Delay)
}
