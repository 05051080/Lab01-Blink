void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(9, LOW);
  delay(2000); // Wait for 1000 millisecond(s)
}
