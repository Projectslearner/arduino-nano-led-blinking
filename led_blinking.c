/*
    Project name : LED Blinking
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-led-blinking
*/

const int ledPin = 13; // Pin connected to the LED

void setup() 
{
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() 
{
  digitalWrite(ledPin, HIGH); // Turn on the LED
  delay(500); // Wait for 500 milliseconds (0.5 seconds)
  digitalWrite(ledPin, LOW); // Turn off the LED
  delay(500); // Wait for 500 milliseconds (0.5 seconds)
}
