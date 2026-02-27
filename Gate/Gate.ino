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
#define LED_pin 9

void setup() {
  Serial.begin( 9600 );
  pinMode (gatePin, INPUT);
  pinMode (LED_pin, OUTPUT);

  Serial.println("Initialized");
  delay(2000);

}

void loop() {
  int gate = digitalRead(gatePin);
  Serial.println(gate);

  if (gate == HIGH){
    digitalWrite(LED_pin, HIGH);
  } else {
    digitalWrite(LED_pin, LOW);
  }
}
