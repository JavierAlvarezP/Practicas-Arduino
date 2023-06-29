const int ledPIN2 = 2;
const int ledPIN3 = 3;
const int ledPIN4 = 4;
const int ledPIN5 = 5;
const int ledPIN6 = 6;
const int ledPIN7 = 7;
const int ledPIN8 = 8;
const int ledPIN9 = 9;

void setup(){
  Serial.begin(9600);
  pinMode(ledPIN2 , OUTPUT);
  pinMode(ledPIN3 , OUTPUT);
  pinMode(ledPIN4 , OUTPUT);
  pinMode(ledPIN5 , OUTPUT);
  pinMode(ledPIN6 , OUTPUT);
  pinMode(ledPIN7 , OUTPUT);
  pinMode(ledPIN8 , OUTPUT);
  pinMode(ledPIN9 , OUTPUT);
}

void loop() {
    digitalWrite(ledPIN2, HIGH);
    delay(500);
    digitalWrite(ledPIN2, LOW);
    
    digitalWrite(ledPIN3, HIGH);
    delay(tiempo);
    digitalWrite(ledPIN3, LOW);
    
    digitalWrite(ledPIN4, HIGH);
    delay(tiempo);
    digitalWrite(ledPIN4, LOW);
    
    digitalWrite(led5, HIGH);
    delay(tiempo);
    digitalWrite(led5, LOW);
    
    digitalWrite(led6, HIGH);
    delay(tiempo);
    digitalWrite(led6, LOW);
    
    digitalWrite(led7, HIGH);
    delay(tiempo);
    digitalWrite(led7, LOW);
    
    digitalWrite(led8, HIGH);
    delay(tiempo);
    digitalWrite(led8, LOW);
    
    digitalWrite(led9, HIGH);
    delay(tiempo);
    digitalWrite(led9, LOW);
}
