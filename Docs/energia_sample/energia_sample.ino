/*
            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                   Version 2, December 2004

Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

Everyone is permitted to copy and distribute verbatim or modified
copies of this license document, and changing it is allowed as long
as the name is changed.

           DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
  TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

 0. You just DO WHAT THE FUCK YOU WANT TO.

Sketch for MSP430. Visit energia : http://energia.nu

*/

#define BUREAU RED_LED
#define CUISINE GREEN_LED

static bool state[] = {false, false};
static uint8_t leds[] = {BUREAU, CUISINE};

void setup() {
    size_t i;
    Serial.begin(9600);
    Serial.println("Power On");
    for (i = 0; i < sizeof(leds); ++i) {
        pinMode(leds[i], OUTPUT);
        digitalWrite(leds[i], state[i] ? HIGH : LOW);
    }
}

void loop() {
    unsigned int toggle;
    while (true) {
        if ( Serial.available()) {
            char ch = Serial.read();
            if (ch >= '0' || ch <= '1') {
                toggle = ch - '0';
                state[toggle] = !state[toggle];
                digitalWrite(leds[toggle], state[toggle] ? HIGH : LOW);
            }
        }
    }
}
