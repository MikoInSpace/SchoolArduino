#define BUZZERPIN 11
#define RED 4
#define YELLOW 3
#define GREEN 2


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(4, OUTPUT);     // turn pin 4 to output
  pinMode(3, OUTPUT);     // turn pin 3 to output
  pinMode(2, OUTPUT);     // turn pin 2 to output
  digitalWrite(2, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(3, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(4, LOW);   // turn the LED off by making the voltage LOW
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RED, HIGH);  // turn the LED on (HIGH is the voltage level)
  tone(BUZZERPIN, 700, 100);     // make tone on buzzer 
  delay(5000);            // wait for five seconds
  digitalWrite(3, HIGH);  // turn the LED on (HIGH is the voltage level)
  tone(BUZZERPIN, 700, 100);
  delay(1000);             // wait for half a second
  digitalWrite(YELLOW, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(RED, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(GREEN, HIGH);  // turn the LED on (HIGH is the voltage level)
  tone(BUZZERPIN, 800, 500);     // play indicator tone
  beep();
  delay(50);            // wait for five seconds
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(1000);
}

void beep() { //defined a variable for beeping after light turned green
    for (int i = 0; i < 6; ++i) { // loop
   tone(BUZZERPIN, 200, 100); 
   delay(1000);
  }

}
