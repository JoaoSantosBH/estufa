void soundSetup()
{
  pinMode(BEEP, OUTPUT);
}
void ringingAlarm()
{
  digitalWrite(BEEP, HIGH);
  delay(125);
  digitalWrite(BEEP, LOW);
  delay(125);
  digitalWrite(BEEP, HIGH);
  delay(250);
  digitalWrite(BEEP, LOW);
  delay(250);
  digitalWrite(BEEP, HIGH);
  delay(500);
  digitalWrite(BEEP, LOW);
  delay(500);
  digitalWrite(BEEP, HIGH);
  delay(1000);
  digitalWrite(BEEP, LOW);
  delay(1000);
  Serial.println("RINGING ALARM");
}
