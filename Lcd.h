/* LCD 16x02  setup */
const int RS = 12, EN = 11, D4 = 5, D5 = 4, D6 = 3, D7 = 2;

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void displayInfoOnLcd()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(TEMPERATURE);
  lcd.print(tempRead);
  lcd.print(CELSIUS);
  lcd.print(LETTER_C);
  lcd.setCursor(0, 1);
  lcd.print(MOISTURE);
  lcd.setCursor(9, 1);
  lcd.print(moistureRead);
  lcd.print(PERCENTUAL);
}

void displayStatusOnLcd(boolean relay)
{
  lcd.clear();
  lcd.setCursor(0, 0);
  if (relay) {
    lcd.print(F("RELE LIGADO"));
  }
  else {
    lcd.print(F("RELE DESLIGADO"));
  }
}

void lcdSetup()
{
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0);
}
