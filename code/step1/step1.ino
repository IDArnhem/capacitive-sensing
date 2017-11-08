/**
 * The simplest thing that could possibly work. 
 */

// this bit over here uses a library
// a library is a reusable collection of code
// often writen by someone else
#include <CapacitiveSensor.h>

// the library we included above lets us use
// this CapacitiveSensor "variable type" here
CapacitiveSensor   cap = CapacitiveSensor(A4, A2);   // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired

// our usual setup, where the Arduino begins when it first gets powered
// this is executed only once
void setup()                    
{
   Serial.begin(9600);
   pinMode(A5, INPUT);
}

// the dumb loop the Arduino goes into after it has set itself up
// this code is executed in a loop for as long as the Arduino is powered
void loop()                    
{
    reading =  cap.capacitiveSensor(30);
    Serial.print(reading);

    delay(50); // this delay is here to regulate the "sampling rate"
}
