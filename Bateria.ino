const int ledPIN2 = 2;
const int ledPIN3 = 3;
const int ledPIN4 = 4;
const int ledPIN5 = 5;
const int ledPIN6 = 6;
const int ledPIN7 = 7;
const int ledPIN8 = 8;

void setup() {
  Serial.begin(9600);
  pinMode(ledPIN2 , OUTPUT);
  pinMode(ledPIN3 , OUTPUT);
  pinMode(ledPIN4 , OUTPUT);
  pinMode(ledPIN5 , OUTPUT);
  pinMode(ledPIN6 , OUTPUT);
  pinMode(ledPIN7 , OUTPUT);
  pinMode(ledPIN8 , OUTPUT);
}

void loop(){
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN4, HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  delay(1000);
  digitalWrite(ledPIN6 , HIGH);
  delay(1000);
  digitalWrite(ledPIN6 , LOW);
  delay(1000);
  digitalWrite(ledPIN7 , HIGH);
  delay(1000);
  digitalWrite(ledPIN7 , LOW);
  delay(1000);
  digitalWrite(ledPIN8 , HIGH); //ciclo 1
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  delay(1000);
  digitalWrite(ledPIN6 , HIGH);
  delay(1000);
  digitalWrite(ledPIN6 , LOW);
  delay(1000);
  digitalWrite(ledPIN7 , HIGH); //ciclo2
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  delay(1000);
  digitalWrite(ledPIN6 , HIGH); //ciclo3
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH); //ciclo4
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH); //ciclo5
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN3 , HIGH); //ciclo6
  delay(1000);
  digitalWrite(ledPIN2 , HIGH); //ciclo7
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  digitalWrite(ledPIN3 , LOW);
  digitalWrite(ledPIN4 , LOW);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN6 , LOW);
  digitalWrite(ledPIN7 , LOW);
  digitalWrite(ledPIN8 , LOW);
  delay(1000);
}
