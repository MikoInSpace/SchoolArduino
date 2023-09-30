#define BUZZERPIN 11
#define RED 4
#define YELLOW 3
#define GREEN 2
int AMOUNT = 5000;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(RED, OUTPUT);     // Set the LED pins as OUTPUT
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(A4, INPUT_PULLUP); // Set A4 as an INPUT with pull-up resistor
  digitalWrite(RED, LOW);   // Initialize LEDs to be off
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  Serial.begin(9600);       // Initialize serial communication
}

// the loop function runs over and over again forever
void loop() {
  if (!digitalRead(A4)) {    // Check if the button on A4 is pressed
    digitalWrite(YELLOW, LOW);  // Turn off yellow LED
    digitalWrite(GREEN, LOW);   // Turn off green LED
    digitalWrite(RED, HIGH);    // Turn on red LED
    tone(BUZZERPIN, 700, 100);  // Make a tone on the buzzer
    delay(AMOUNT);              // Wait for five seconds
    digitalWrite(RED, LOW);     // Turn off red LED
    delay(1000);                // Wait for one second
    digitalWrite(YELLOW, HIGH); // Turn on yellow LED
    tone(BUZZERPIN, 700, 100);  // Make a tone on the buzzer
    delay(1000);                // Wait for one second
    digitalWrite(YELLOW, LOW);  // Turn off yellow LED
    digitalWrite(RED, LOW);     // Turn off red LED
    digitalWrite(GREEN, HIGH);  // Turn on green LED
    tone(BUZZERPIN, 800, 500);  // Play an indicator tone
    beep();                     // Call the beep function
    delay(50);                  // Wait for 50 milliseconds
    digitalWrite(GREEN, LOW);   // Turn off green LED
    digitalWrite(YELLOW, HIGH); // Turn on yellow LED
    delay(1000);                // Wait for one second
  }
}

void beep() {
  for (int i = 0; i < 6; ++i) {  // Loop to make beeping sound
    tone(BUZZERPIN, 200, 100);  // Make a beep on the buzzer
    delay(200);                 // Wait for 200 milliseconds between beeps
  }
}
