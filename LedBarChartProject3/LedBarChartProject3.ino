 /* @author Alejo Cain 
 *  Date: 11-09-2021
 *  Time: 17:10 
 *  Title: LED Bar Chart 
 */

 const int analogPin = A0; // Pin connected to potentiometer
 const int ledCount = 9; // Amounts of LEDS
 int ledPins[] = {2,3,4,5,6,7,8,9,10}; // Pins connected to the leds 

 
void setup() {
  // put your setup code here, to run once:
for (int thisLed = 0; thisLed < ledCount; thisLed++){
  pinMode(ledPins[thisLed], OUTPUT); // Make ledPins OUTPUT
}
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorReading = analogRead(analogPin); //analog input
int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);// map(value, fromLow, fromHigh, toLow, toHigh)
for (int thisLed = 0; thisLed < ledCount; thisLed++){
  if(thisLed < ledLevel){
    digitalWrite(ledPins[thisLed], HIGH);  // turn LED's on in order
}
else { // Turn LED's off in order 
  digitalWrite(ledPins[thisLed], LOW);
}
}
}
