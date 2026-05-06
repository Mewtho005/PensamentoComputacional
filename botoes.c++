// C++ code
//
int pote_A1 = 0;

int bot1 = 0;

int bot2 = 0;

int bot3 = 0;

int potencia = 0;

void setup()
{
  pinMode(A2, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  potencia = analogRead(A2);
  bot1 = digitalRead(5);
  bot2 = digitalRead(6);
  bot3 = digitalRead(7);
  if (bot1 == HIGH) {
    analogWrite(11, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    analogWrite(11, map(potencia, 0, 1023, 0, 200));
  } else {
    analogWrite(11, LOW);
  }
  if (bot2 == HIGH) {
    analogWrite(10, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(9, HIGH);
    analogWrite(11, map(potencia, 0, 1023, 0, 55));
    analogWrite(10, map(potencia, 0, 1023, 0, 0));
    analogWrite(9, map(potencia, 0, 1023, 0, 255));
  } else {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
  if (bot3 == HIGH) {
    analogWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    analogWrite(9, map(potencia, 0, 1023, 0, 200));
  } else {
    analogWrite(9, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
