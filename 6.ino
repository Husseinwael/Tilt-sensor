
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
analogWrite(3,analogRead(A0)/4);
}
