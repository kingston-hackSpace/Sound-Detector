/*
SparkFun Sound Detector
ENVELOPE MODE
Detecting sound amplitude and printing in Serial Monitor

Hardware:
Arduino UNO
Sparkfun Sound Detector

*/

#define envelopePin A0 //analog pin

void setup() {
  Serial.begin( 9600 );
  pinMode( envelopePin, INPUT );
}

void loop() {
  Serial.println( analogRead( envelopePin ) );
}
