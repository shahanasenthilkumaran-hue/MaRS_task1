int potPin = A0;

int redPin = 9;
int greenPin = 10;
int bluePin = 11;

int ledPin = 6;

unsigned long previousMillis = 0;
int interval = 500;
int ledState = LOW;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  // Map potentiometer to RGB colors
  int red = map(potValue, 0, 1023, 0, 255);
  int blue = map(potValue, 0, 1023, 255, 0);
  int green = map(potValue, 0, 1023, 100, 200);

  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);

  // Control blinking speed
  interval = map(potValue, 0, 1023, 100, 1000);

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
  }
}