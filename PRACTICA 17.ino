// C++ code
//
int A = 0;

int B = 0;

int C = 0;

void setup()
{
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);
  if ((!(A < LOW)) && (B < HIGH && (!(C < LOW)))) {
    digitalWrite(12, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
  } else {
    if (A < LOW && (B < HIGH && (!(C < LOW)))) {
      digitalWrite(12, HIGH);
      delay(3000); // Wait for 3000 millisecond(s)
    } else {
      if (A < LOW && (B < HIGH && C < LOW)) {
        digitalWrite(12, HIGH);
        delay(3000); // Wait for 3000 millisecond(s)
      } else {
        digitalWrite(12, LOW);
        delay(3000); // Wait for 3000 millisecond(s)
      }
    }
  }
}
