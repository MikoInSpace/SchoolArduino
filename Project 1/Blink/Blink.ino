
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);            // wait for a second
  digitalWrite(3, HIGH);   // turn the LED off by making the voltage LOW
  delay(500);            // wait for a second
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);
  delay(5000);
}
