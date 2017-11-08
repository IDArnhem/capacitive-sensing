/**
 * Send that trigger event via serial to another system so that we can build
 * a reaction.
 */

#include <CapacitiveSensor.h>

CapacitiveSensor   cap = CapacitiveSensor(A2, A6);        // 10M resistor between pins 2 & 6, pin 6 is sensor pin, add a wire and or foil if desired
int threshold = 200;    // set a default for our threshold

int keyboardLetter = 'a'; // choose your own, this the letter of the keyboard that we will send to "Soundplant"

void setup()                    
{
   Serial.begin(9600);
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(A7, INPUT);
}

void loop()                    
{
    long reading; 

    reading =  cap.capacitiveSensor(30);

    threshold = analogRead(A7); // read threshold from potentiometer

    // trigger the LED light if our reading is greater than our threshold
    if(reading > threshold) {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println(keyboardLetter); // on trigger we send the letter via serial
    } else {
      digitalWrite(LED_BUILTIN, LOW);
    }

    // we will not print debugging values, because we will use our Serial
    // communication to send our messages to another computer

    // Serial.print(reading);
    // Serial.print(",");
    // Serial.print(threshold);
    // Serial.println();
    delay(50);
}
