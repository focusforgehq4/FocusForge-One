#include "led_engine.h"
/*
  =====================================================
  FocusForge One
  Alpha 0.1 - First Light

  Author: Riley
  Project: FocusForge
  =====================================================
*/

// ---------- Pin Definitions ----------
const int LED_PIN = 5;
const int BUTTON_PIN = 18;
const int BUZZER_PIN = 19;

// ---------- Setup ----------
void setup() {

  Serial.begin(115200);

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);
ledSetup();
  Serial.println("--------------------------------");
  Serial.println("FocusForge One");
  Serial.println("Alpha 0.1 - First Light");
  Serial.println("System Booting...");
  Serial.println("--------------------------------");

}

// ---------- Main Loop ----------
void loop() {

  // Firmware coming soon

}
