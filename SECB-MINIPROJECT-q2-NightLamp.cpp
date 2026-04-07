int ldrPin = A0;
int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightValue = analogRead(ldrPin);

  Serial.println(lightValue);

  if (lightValue < 500) {
    digitalWrite(ledPin, HIGH); // dark
  } else {
    digitalWrite(ledPin, LOW); // bright
  }

  delay(200);
}