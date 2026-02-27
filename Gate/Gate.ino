/*
SparkFun Sound Detector
GATE MODE
Detecting sound and visualizing with an LED

Hardware:
Arduino UNO
Sparkfun Sound Detector
LED + 220ohms resistor
*/

#define gatePin 2 //digital pin

void setup() {
  Serial.begin( 9600 );
  pinMode( gatePin, INPUT );

  Serial.println("Initialized");
  delay(2000);
}

void loop() {
  Serial.println( digitalRead( gatePin ) );
  int gate = digitalRead(gatePin);
  Serial.println(gate);
}
