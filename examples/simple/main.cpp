#include <Arduino.h>

#define PIN_RELAY_0 16
#define PIN_RELAY_1 17
#define PIN_RELAY_2 18
#define PIN_RELAY_3 19

#define PIN_LED 13

const uint16_t int_delay = 500;

void setup() {
  Serial.begin(115200);
  Serial.println("Setup");

  // Set LED pin mode to OUTPUT
  pinMode(PIN_LED, OUTPUT);

  // Set relay pin modes to OUTPUT
  pinMode(PIN_RELAY_0, OUTPUT);
  pinMode(PIN_RELAY_1, OUTPUT);
  pinMode(PIN_RELAY_2, OUTPUT);
  pinMode(PIN_RELAY_3, OUTPUT);

  // Turn off all relays
  digitalWrite(PIN_RELAY_0, LOW);
  digitalWrite(PIN_RELAY_1, LOW);
  digitalWrite(PIN_RELAY_2, LOW);
  digitalWrite(PIN_RELAY_3, LOW);

  // Turn on all relays in sequence
  digitalWrite(PIN_RELAY_0, HIGH);
  delay(int_delay);
  digitalWrite(PIN_RELAY_1, HIGH);
  delay(int_delay);
  digitalWrite(PIN_RELAY_2, HIGH);
  delay(int_delay);
  digitalWrite(PIN_RELAY_3, HIGH);
  delay(int_delay);

  digitalWrite(PIN_RELAY_0, LOW);
  delay(int_delay);
  digitalWrite(PIN_RELAY_1, LOW);
  delay(int_delay);
  digitalWrite(PIN_RELAY_2, LOW);
  delay(int_delay);
  digitalWrite(PIN_RELAY_3, LOW);
  delay(int_delay);
}

void loop() {
  // put your main code here, to run repeatedly:
}