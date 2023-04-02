#include <SoftwareSerial.h>

#include <EasyVR.h>

SoftwareSerial softSerial(2, 3); // RX, TX

EasyVR easyvr(softSerial);

void setup() {

  Serial.begin(9600);

  while (!Serial);

  

  softSerial.begin(9600);

  easyvr.setPinOutput(EasyVR::IO1, LOW); // set output pin

  easyvr.setTimeout(5); // set recognition timeout (5 seconds)

  

  if (easyvr.detect()) {

    Serial.println("EasyVR detected!");

    easyvr.setLanguage(0); // set language to English

    easyvr.setThreshold(0, 30); // set word "red" threshold to 30

    easyvr.setThreshold(1, 30); // set word "green" threshold to 30

    easyvr.setThreshold(2, 30); // set word "blue" threshold to 30

  }

}

void loop() {

  int16_t result = easyvr.recognize(); // recognize speech

  

  if (result >= 0) { // if recognition was successful

    switch (result) {

      case 0:

        Serial.println("Red"); // print "Red" to serial monitor

        break;

      case 1:

        Serial.println("Green"); // print "Green" to serial monitor

        break;

      case 2:

        Serial.println("Blue"); // print "Blue" to serial monitor

        break;

      default:

        break;

    }

  }

}

