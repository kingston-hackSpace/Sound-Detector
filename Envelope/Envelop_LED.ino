/*
SparkFun Sound Detector
ENVELOPE MODE
Detecting sound and visualizing with an LED

Hardware:
Arduino UNO
Sparkfun Sound Detector
LED + 220ohms resistor
*/

#define envelopPin A0 //analog pin
#define LED_pin 9
#define THR 50

void setup() {
  Serial.begin( 9600 );
  pinMode (envelopPin, INPUT);
  pinMode (LED_pin, OUTPUT);

  Serial.println("Initialized");
  delay(2000);
}

void loop() {
  int envelop = analogRead(envelopPin); //values between 0 and 1023
  Serial.println(envelop);

  if (envelop > THR){
    digitalWrite(LED_pin, HIGH);
    delay(50);
  } else {
    digitalWrite(LED_pin, LOW);
  }
}
