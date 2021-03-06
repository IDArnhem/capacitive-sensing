/**
 * Adding a potmeter to allow us to dynamically change the trigger threshold
 */

#include <CapacitiveSensor.h>

CapacitiveSensor   cap = CapacitiveSensor(A2, A6);        // 10M resistor between pins 2 & 6, pin 6 is sensor pin, add a wire and or foil if desired
int threshold = 200;    // set a default for our threshold

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
    } else {
      digitalWrite(LED_BUILTIN, LOW);
    }

    Serial.print(reading);
    Serial.print(",");
    Serial.print(threshold);
    Serial.println();
    delay(50);
}
