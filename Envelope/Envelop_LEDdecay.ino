/*
SparkFun Sound Detector
ENVELOPE MODE + LED Decay
Detecting sound and visualizing with an LED with decay effect

Hardware:
Arduino UNO
Sparkfun Sound Detector
LED + 220ohms resistor
*/

#define envelopPin A0 //analog pin
#define LED_pin 9
#define THR 50

float visualLevel = 0;

void setup() {
  Serial.begin( 9600 );
  pinMode (envelopPin, INPUT);
  pinMode (LED_pin, OUTPUT);

  Serial.println("Initialized");
  delay(2000);
}

void loop() {
  int envelop = analogRead(envelopPin); //values between 0 and 1023

  if (envelop > visualLevel) {
    visualLevel = envelop;   // catch new peak
  } else {
    visualLevel -= 0.1;        // 0.0 - 5.0, bigger numbers will make decay faster
  }

  if (visualLevel < 0) { // prevent negative numbers
    visualLevel = 0; 
  }
  if (visualLevel > THR) {
    digitalWrite(LED_pin, HIGH);
} else {
    digitalWrite(LED_pin, LOW);
}
}
