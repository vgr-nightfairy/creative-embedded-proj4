int s1 = 15;
int s2 = 2;
int s3 = 0;
int s4 = 4;
const int x = 14;
const int y = 13;
int x_durum;
int y_durum;

void setup() {
  Serial.begin(9600);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(s4, OUTPUT);
}

void loop() {
  x_durum = analogRead(x);
  y_durum = analogRead(y);

  Serial.println(x_durum);
  
  if (x_durum < 2750) {
    digitalWrite(s1, HIGH);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
    delay(3);
    digitalWrite(s1, LOW);
    digitalWrite(s2, HIGH);
    digitalWrite(s3, LOW);
    digitalWrite(s4, LOW);
    delay(3);
    digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, HIGH);
    digitalWrite(s4, LOW);
    delay(3);
    digitalWrite(s1, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s4, HIGH);  
  }
  else if (x_durum > 2900) {
    digitalWrite(s4, HIGH);
    digitalWrite(s3, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s1, LOW);
    delay(3);
    digitalWrite(s4, LOW);
    digitalWrite(s3, HIGH);
    digitalWrite(s2, LOW);
    digitalWrite(s1, LOW);
    delay(3);
    digitalWrite(s4, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s2, HIGH);
    digitalWrite(s1, LOW);
    delay(3);
    digitalWrite(s4, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s1, HIGH);  
  }
  else if (x_durum > 2750 && x_durum < 2900) {
    digitalWrite(s4, LOW);
    digitalWrite(s3, LOW);
    digitalWrite(s2, LOW);
    digitalWrite(s1, LOW);
  }
}
