/* Section 1
  Analog input
 
 Reads an analog input pin (range 0-1023) and
 prints the results to the serial monitor.
 
 The circuit:
 * analog signal connected to analog pin A0.
 
*/
 
const int inputPin0 = A0;  // Analog input pin
const int inputPin1 = A1;  // Analog input pin
const int inputPin2 = A2;
int count;
 
void setup() {
    Serial.begin(115200); 
}
 
void loop() {
  
  // analogRead values from 0 to 1023 (10 bit ADC)
  int sensorVal0 = analogRead(inputPin0);
  int sensorVal1 = analogRead(inputPin1);
  int sensorVal2 = analogRead(inputPin2);
  
  float volt0 = sensorVal0 * (5.0 / 1023.0);
  float volt1 = sensorVal1 * (5.0 / 1023.0);
  float volt2 = sensorVal2 * (5.0 / 1023.0);
  
  // print the results to the serial monitor:
  Serial.print(millis());
  Serial.print(", ");  
  Serial.print(volt2);
  Serial.print(", ");
  Serial.print(volt0);
  Serial.print(", ");
  Serial.println(volt1);  
  
  delay(1);  // sample time ms                 
}
