

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
  String  inVal = "";

  while (Serial.available() > 0)
  {
    inVal += (char) Serial.read();
    delay(5);
  }
  if (inVal == "ON")
  {
    Serial.println("LED ON");
    digitalWrite(13, HIGH);
  }
  else if (inVal == "OFF")
  {
    Serial.println("LED OFF");
    digitalWrite(13, LOW);
  }
}
