/**
 * Adding a potmeter to allow us to dynamically change the trigger threshold
 */

#include <CapacitiveSensor.h>

CapacitiveSensor   cap = CapacitiveSensor(A4, A2);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
int threshold = 200;    // set a default for our threshold

void setup()                    
{
   Serial.begin(9600);
   pinMode(LED_BUILTIN, OUTPUT);
   pinMode(A5, INPUT);
}

void loop()                    
{
    long reading; 

    reading =  cap.capacitiveSensor(30);

    threshold = analogRead(A5); // read threshold from potentiometer

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
