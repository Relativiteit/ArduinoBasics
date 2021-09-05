/* @author Alejo Cain 
 *  Date: 05-09-2021
 *  Time: 21:59
 *  Title: Strobe LED's */
const int analogInPin = A0; // analog pin connected to Potentiometer
int sensorValue = 0; // read value of potentiometer
int timer = 0; // assign value of timer to zero 

// Assign digital pins 12 and 11 as outputs 
void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

// Start a loop to turn the LED's on and off with a delay 
void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(analogInPin); // read value of Potentiometer
  timer = map(sensorValue, 0, 1012, 10, 500); // delay of 10 ms up to 500 ms

  digitalWrite(12, HIGH); //LED's turn on 
  delay(timer);
  digitalWrite(12, LOW); // LED's turn off
  delay(timer);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(timer);
  digitalWrite(11, LOW);
  delay(timer);
  digitalWrite(11, HIGH);
  delay(timer);
  digitalWrite(11, LOW);
}
