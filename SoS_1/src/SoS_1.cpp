/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/jessiewynne/Library/CloudStorage/OneDrive-UNC-Wilmington/SmartCoasts/SoS_1/src/SoS_1.ino"
// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
void setup();
void loop();
#line 5 "/Users/jessiewynne/Library/CloudStorage/OneDrive-UNC-Wilmington/SmartCoasts/SoS_1/src/SoS_1.ino"
const pin_t MY_LED = D7;
// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(SEMI_AUTOMATIC);
// The setup() method is called once when the device boots.
void setup()
{
  // Particle.disconnect();
  // WiFi.off();
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}
// The loop() method is called frequently.
void loop()
{
	// Turn on the LED
	digitalWrite(MY_LED, HIGH);

	// Leave it on for one second
	delay(3s);
// 3 short flashes 
digitalWrite(MY_LED, HIGH); // turn LED on (HIGH)
delay(500);                 //wait half a second
digitalWrite(MY_LED, LOW); // turn LED off (LOW)
delay (300);
digitalWrite(MY_LED, HIGH);
delay(500);
digitalWrite(MY_LED, LOW);
delay(300);
digitalWrite(MY_LED, HIGH);
delay(500);
digitalWrite(MY_LED, LOW);
delay(300);

	// Turn it off
	digitalWrite(MY_LED, LOW);
// 3 long flashes
digitalWrite(MY_LED, HIGH); // turn LED on (HIGH)
delay(1500);                 //wait half a second
digitalWrite(MY_LED, LOW); // turn LED off (LOW)
delay (300);
digitalWrite(MY_LED, HIGH);
delay(1500);
digitalWrite(MY_LED, LOW);
delay(300);
digitalWrite(MY_LED, HIGH);
delay(1500);
digitalWrite(MY_LED, LOW);
delay(300);

	// Wait one more second
	delay(1s);
// 3 short flashes again
digitalWrite(MY_LED, HIGH); // turn LED on (HIGH)
delay(500);                 //wait half a second
digitalWrite(MY_LED, LOW); // turn LED off (LOW)
delay (300);
digitalWrite(MY_LED, HIGH);
delay(500);
digitalWrite(MY_LED, LOW);
delay(300);
digitalWrite(MY_LED, HIGH);
delay(500);
digitalWrite(MY_LED, LOW);
delay(3000);

	// And repeat!

}