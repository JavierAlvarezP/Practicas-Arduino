const int ledPIN2 = 2;
const int ledPIN3 = 3;
const int ledPIN4 = 4;
const int ledPIN5 = 5;

void setup(){
  Serial.begin(9600);
  pinMode(ledPIN2 , OUTPUT);
  pinMode(ledPIN3 , OUTPUT);
  pinMode(ledPIN4 , OUTPUT);
  pinMode(ledPIN5 , OUTPUT);
}

void loop(){
  digitalWrite(ledPIN3 , LOW); //PARES
  delay(1000);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  digitalWrite(ledPIN4 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN4 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  digitalWrite(ledPIN4 , HIGH);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN4 , LOW);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN2 , LOW); //IMPARES
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN2 , HIGH);
  digitalWrite(ledPIN3 , HIGH);
  delay(1000);
  digitalWrite(ledPIN2 , LOW);
  digitalWrite(ledPIN3 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN4 , HIGH);
  digitalWrite(ledPIN3 , HIGH);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN4 , LOW);
  digitalWrite(ledPIN3 , LOW);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN5, HIGH);
  digitalWrite(ledPIN3 , HIGH);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN3 , LOW);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  digitalWrite(ledPIN4 , HIGH);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN4 , LOW);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  digitalWrite(ledPIN5 , HIGH);
  digitalWrite(ledPIN4 , HIGH);
  digitalWrite(ledPIN3 , HIGH);
  digitalWrite(ledPIN2 , HIGH);
  delay(1000);
  digitalWrite(ledPIN5 , LOW);
  digitalWrite(ledPIN4 , LOW);
  digitalWrite(ledPIN3 , LOW);
  digitalWrite(ledPIN2 , LOW);
  delay(1000);
  
}
