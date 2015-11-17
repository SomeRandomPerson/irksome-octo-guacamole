//Code by Andrew Faith and Jeewan
//i did it!!!!!
//so did Faith
/*
  Analog input
 
 Reads an analog input pin (range 0-1023) and
 prints the results to the serial monitor.
 
 The circuit:
 * analog signal connected to analog pin A0.
 
*/
 
const int inputPin = A0;  // Analog input pin 
 
void setup() {
    Serial.begin(9600); 
}
 
void loop() {
  
  // analogRead values from 0 to 1023 (10 bit ADC)
  int sensorVal = analogRead(inputPin);
  
  // print the results to the serial monitor:                    
  Serial.println(sensorVal);  
  
  delay(10);  // sample time ms                 
}
