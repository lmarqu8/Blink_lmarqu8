/*
  // Louis Marquez, 673787881, lmarqu8 LastName, 
o // Lab 1 - Blinking Leds Lab
o // Description - This code is supposed to cycle through 3 leds, which are the built in LED on the board on pin 13, a red LED I connected on pin 12, and a green LED I connected on pin 11.
                    The cycle is onboard on for one second off for one second, red LED on 1 second off 1 second, and then green on for 1 second off for one second, then repeating ad infinitum.
o // Assuming LED_BUILTIN is the builtin led on pin 13.
o // I just edited the basic blink code found in the arduino IDE.
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT); /* Sets the pin 13, aka LED_BUILTIN, and an output pin */
  pinMode(12, OUTPUT); /* Sets pin 12 as an output pin */
  pinMode(11, OUTPUT); /* Sets pin 11 as an output pin */
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level) 
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
