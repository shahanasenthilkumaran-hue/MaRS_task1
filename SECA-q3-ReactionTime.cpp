int ledPin = 2;
int buttonPin = 3;

unsigned long startTime;
bool ledOn = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {

  // Step 1: wait random time
  if (!ledOn) {
    int waitTime = random(2000, 5000);
    delay(waitTime);

    digitalWrite(ledPin, HIGH);
    startTime = millis();
    ledOn = true;
  }

  // Step 2: wait for button press
  if (ledOn && digitalRead(buttonPin) == LOW) {
    unsigned long reactionTime = millis() - startTime;

    Serial.print("Reaction Time: ");
    Serial.print(reactionTime);
    Serial.println(" ms");

    digitalWrite(ledPin, LOW);
    ledOn = false;

    delay(2000); // pause before next round
  }
}