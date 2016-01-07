int hallEffect = 6;


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(hallEffect, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int State = digitalRead(hallEffect);
  // print out the state of the button:
  Serial.println(State);
  delay(1);       
}
