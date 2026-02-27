/*
SparkFun Sound Detector
GATE MODE
Detecting sound presence

Hardware:
Arduino UNO
Sparkfun Sound Detector

*/

#define gatePin 2 //digital pin

void setup() {
  Serial.begin( 9600 );
  pinMode( gatePin, INPUT );

  Serial.println("Initialized");
  delay(2000);
}

void loop() {
  int gate = digitalRead(gatePin);
  Serial.println(gate);
}
