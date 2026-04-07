#define trigPin 9
#define echoPin 10
#define ledPin 6

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Send pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    Serial.println("No signal");
    return;
  }

  // Convert to distance
  distance = duration * 0.034 / 2;

  // Print output
  Serial.print("Distance: ");
  Serial.print(distance);

  // Logic (adjusted for your current reading)
  if (distance < 150) {
    Serial.println(" -> LED ON");
    digitalWrite(ledPin, HIGH);
  } else {
    Serial.println(" -> LED OFF");
    digitalWrite(ledPin, LOW);
  }

  delay(200);
}