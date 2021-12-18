/*
   Oven made to remove moisture
   from filaments for 3D printing
   How it works:
   It turns on the relay if the temperature
   is less than 50 degrees,
   and off if it reaches that same temperature,
   when the humidity is ideal it triggers an audible alarm

   12/12/2021
   joaomarcelo.ms@gmail.com

*/

#include <LiquidCrystal.h>
#include "DHT.h"
#include "Variables.h"
#include "Constants.h"
#include "Lcd.h"
#include "Relay.h"
#include "Sound.h"
#include "Dht.h"

void setup()
{
  Serial.begin(115200);
  lcdSetup();
  soundSetup();
  relaySetup();
  sensorSetup();
}

void loop()
{
  displayInfoOnLcd();
  delay(5000);
  handleTemperature();
  handleUmidity();
  showSerialInfo();
  displayStatusOnLcd(lightIsOn);
  delay(5000);
}


void showSerialInfo()
{
  Serial.print(F("Umidade: "));
  Serial.print(moistureRead);
  Serial.println(F(" %"));
  Serial.println(F("================="));
  Serial.print(F("Temperatura: "));
  Serial.print(tempRead);
  Serial.println(F(" *C"));
  Serial.println(F("================="));
  Serial.print(F("Esta umido "));
  Serial.println(isUmid);
  Serial.println(F("================="));

}
