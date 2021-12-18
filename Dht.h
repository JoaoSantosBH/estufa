
DHT dht(DHT_SENSOR, DHTTYPE);
boolean lightIsOn = false;


void sensorSetup()
{
  dht.begin();
}

void handleTemperature()
{
  tempRead = dht.readTemperature();
  if (tempRead >= MAX_TEMP)
  {
    powerOffLight();
    lightIsOn = false;

  }
  else
  {
    if (isUmid && !lightIsOn) {
      powerOnLight();
      lightIsOn = true;
    }
  }
}

void handleUmidity()
{
  moistureRead = dht.readHumidity();
  if (moistureRead <= MOISTURE_LOW_VALUE)
  {
    ringingAlarm();
    powerOffLight();
    isUmid = false;
  } else {
    isUmid = true;
  }
}
