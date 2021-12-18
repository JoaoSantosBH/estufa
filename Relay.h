void powerOnLight()
{
  digitalWrite(RELAY, HIGH);
  Serial.println("Power ON Light");
}

void powerOffLight()
{
  digitalWrite(RELAY, LOW);
  Serial.println("Power Off Light");
}

void relaySetup()
{
  pinMode(RELAY, OUTPUT);
  powerOnLight();
}
