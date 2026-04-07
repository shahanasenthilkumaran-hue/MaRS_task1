unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;

int led1 = 2;
int led2 = 3;
int led3 = 4;

int state1 = LOW;
int state2 = LOW;
int state3 = LOW;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis1 >= 500) {
    previousMillis1 = currentMillis;
    state1 = !state1;
    digitalWrite(led1, state1);
  }

  if (currentMillis - previousMillis2 >= 1000) {
    previousMillis2 = currentMillis;
    state2 = !state2;
    digitalWrite(led2, state2);
  }

  if (currentMillis - previousMillis3 >= 1500) {
    previousMillis3 = currentMillis;
    state3 = !state3;
    digitalWrite(led3, state3);
  }
}