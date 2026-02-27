# Sound Detector

The SparkFun Sound Detector is a microphone-based sensor designed to detect the presence and intensity of sound in its surroundings.

Note : *It does NOT provide decibel readings, so it’s not suitable for precise noise level measurements.*

Note : *It’s NOT a sound recorder—* It only measures sound intensity (volume) and provides a corresponding signal.

More info : [here](https://learn.sparkfun.com/tutorials/sound-detector-hookup-guide)

----

### HOW IT WORKS:

The sensor’s microphone converts air-pressure variations (sound waves) into electrical signals, which are then processed to indicate sound intensity. This processed signal is available in two forms:

- GATE: Processes DIGITAL signals that indicate whether the sound level is above or below a certain threshold.
In other words, it works like an on/off switch to detect sound vs. no sound.

- ENVELOPE: Processes ANALOG signals that represent ambient sound volume. In other words, it allow us to monitor sound amplitud. 


----
### HARDWARE

- Arduino UNO
- Sparkfun Sound Detector

---- 
# TUTORIAL :  ENVELOPE

### WIRING 
Envelope diagram reference image : [here](https://github.com/kingston-hackSpace/Sound-Detector/blob/main/Envelope/Env_Diagram.png)

Note: Arduino A0 pin is connected to the sensor's **ENVELOPE pin**

### CODE & INSTRUCTIONS

- Upload [this code](https://github.com/kingston-hackSpace/Sound-Detector/blob/main/Envelope/Envelope.ino) to your Arduino board

- Open the Serial Monitor to visualize the incomming data from the sensor

- Next: Add an LED and resistor, and upload [this code](https://github.com/kingston-hackSpace/Sound-Detector/blob/main/Envelope/Envelop_LED.ino) to your board. 
----
# TUTORIAL :  GATE

### WIRING
Gate diagram reference image : [here](https://github.com/kingston-hackSpace/Sound-Detector/blob/main/Gate/Gate_Diagram.png)

Note: Arduino A0 pin is connected to the sensor's **GATE pin**

### CODE & INSTRUCTIONS
  
- Upload [this code](https://github.com/kingston-hackSpace/Sound-Detector/blob/main/Gate/Gate.ino) to your Arduino board.

- Look carefully at this new code. It is very similar to the previous one, but key elements have changed.

- Open the Serial Monitor. How is this GATE data different to previous ENVELOPE one.

- Next: Add an LED and resistor, and upload [this code]

----
# MORE TUTORIALS

[Sparkfun hookup guide](https://learn.sparkfun.com/tutorials/sound-detector-hookup-guide)

[RGB LED reactive to sound - tutorial](https://learn.sparkfun.com/tutorials/sik-experiment-guide-for-the-arduino-101genuino-101-board/experiment-15-using-the-sound-detector-board)


