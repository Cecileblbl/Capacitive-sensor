#include <CapacitiveSensor.h>

CapacitiveSensor sensor = CapacitiveSensor(4,2);  // 1M resistor between pins 4 & 2, pin 2 is sensor pin
int led1 = 13;

void setup() {
  Serial.begin(9600);
    pinMode(led1, OUTPUT);
}

void loop() {
  long measurement =  sensor.capacitiveSensor(30);
  Serial.println(measurement);
     if (measurement>500) {
    digitalWrite(led1,HIGH);
    Serial.print("high");
     }
    else{
      digitalWrite(led1,LOW);
    }
  delay(10);
}

