// C++ code
//
void setup()
{
  pinMode(10, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(10) == LOW) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(LED_BUILTIN, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
  }
}
