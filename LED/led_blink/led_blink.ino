void setup() {
  pinMode(13, OUTPUT);

}

void loop() {
 digitalWrite(13, HIGH); //Set LED state to high
 delay(1000); //Wait for 1000 ms
 digitalWrite(13, LOW);//Set LED state to low
 delay(1000); //Wait for 1000 ms
} 
