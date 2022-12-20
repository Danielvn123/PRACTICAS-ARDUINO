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
}

void loop()
{
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);
  if ((!(A == 1)) && (B == 1 && (!(C == 1)))) {
    digitalWrite(13, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
  } else {
    if (A == 1 && (B == 1 && (!(C == 1)))) {
      digitalWrite(13, HIGH);
      delay(3000); // Wait for 3000 millisecond(s)
    } else {
      if (A == 1 && (B == 1 && C == 1)) {
        digitalWrite(13, HIGH);
        delay(3000); // Wait for 3000 millisecond(s)
      } else {
        digitalWrite(13, LOW);
        delay(3000); // Wait for 3000 millisecond(s)
      }
    }
  }
}
