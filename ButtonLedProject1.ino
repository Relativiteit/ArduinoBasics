/* @author Alejo Cain 
 *  Date: 05-09-2021 
 *  Time: 09:47 
 *  Title: Controlling led with digital button 
 */
 
const int buttonPin = 2; // Define buttonPin
const int ledPin = 13; // Define ledPin
int buttonState = 0; // give variable buttonState a value of 0

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT); // state that ledPin is OUTPUT
pinMode(buttonPin, INPUT); // sate that buttonPIN is INPUT

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin); 
if (buttonState == HIGH)
   {digitalWrite(ledPin, HIGH);}
else {
  digitalWrite(ledPin, LOW);}
}
