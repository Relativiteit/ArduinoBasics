/*@author Alejo Cain 
 * Date: 12-09-2021
 * Time: 11:06
 * Title: PlantHumidity */
// variables 
const int moistureAO = 0;
int AO = 0;
int tmp = 0;
int buzzPin = 11;
int LED = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);         // baudrate
Serial.println("Soil moisture sensor");
pinMode(moistureAO, INPUT); // Assign pin AO as INPUT
pinMode(buzzPin, OUTPUT); // Assign pin 11 as OUTPUT
pinMode(LED, OUTPUT);     // Assign pin 13 as OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  tmp = analogRead(moistureAO);
  if(tmp != AO) {
    AO = tmp;
    Serial.print("A = "); // show resistance of Sensor
    Serial.print(AO);
    }
  
  delay(1000);
  if (analogRead(0) > 900){ // if value is higher then 900
    digitalWrite(buzzPin, HIGH);
    digitalWrite(LED, HIGH);
    delay(1000); // wait 1 second
    digitalWrite(buzzPin, LOW);
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(buzzPin, LOW); // if the value is lower then 900
    digitalWrite(LED, LOW);
  }

}
