
#define BUZZER_PIN 3
#define LDR_PIN A0
int ledPin = 4;
int dotDelay = 200;

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int val, frequency;

  val = analogRead(LDR_PIN);

  frequency = map(val, 0, 1023, 5000, 2500);

  for(int i = 0; i <= 10; i++){
    tone(BUZZER_PIN, frequency, 20);
    delay(100);
  }

  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
 
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  
  delay(3*dotDelay);

  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  digitalWrite(ledPin, HIGH);
  delay(3*dotDelay);
  digitalWrite(ledPin, LOW);
  
  delay(3*dotDelay);

  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  delay(dotDelay);
  
  digitalWrite(ledPin, HIGH);
  delay(dotDelay);
  digitalWrite(ledPin, LOW);
  
  delay(7*dotDelay);
}
