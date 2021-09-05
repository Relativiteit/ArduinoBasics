/* @author Alejo Cain 
 *  Date: 05-09-2021 
 *  Time: 11:05
 *  Title: Dimming led with potetiometer
 */

// project variables 
int potPin = A0; // Analog inputpin of potentiometer
int potValue = 0; // Assign the value 0 to the variable potValue
int led = 9; // Pin 9 has the ~ symbool and therefore can be used for pulse width modulation

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT); // assign pin 9 to OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
potValue = analogRead(potPin); // Read value A0 from potentiometer and assign to potValue
analogWrite(led, potValue / 4 ); // send value A0 to led

delay(10); // wait 10 ms 
}
