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
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);
  if (((!(A == LOW)) && (B == HIGH && (!(C == LOW)))) && ((A == HIGH && (B == HIGH && (!(C == LOW)))) && (A == HIGH && (B == HIGH && C == LOW)))) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    delay(3000); // Wait for 3000 millisecond(s)
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    delay(3000); // Wait for 3000 millisecond(s)
  }
}
