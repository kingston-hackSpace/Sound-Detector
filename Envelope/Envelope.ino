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
  pinMode(envelopePin,INPUT);

  Serial.println("Initialized");
  delay(2000);
}

void loop() {
  int envelope = analogRead(envelopePin);
  Serial.println(envelop);
}
