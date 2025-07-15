#define trigPin 7
#define echoPin 6

void setup() {
  pinMode(2, INPUT);   // IR left
  pinMode(3, INPUT);   // IR right
  pinMode(10, OUTPUT); // Motor pins
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(trigPin, OUTPUT);  // Ultrasonic trigger
  pinMode(echoPin, INPUT);   // Ultrasonic echo

  Serial.begin(9600);
}

void loop() {
  // Obstacle Detection
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  float distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 15) {
    // Obstacle detected, stop motors
    digitalWrite(10, 0);
    digitalWrite(11, 0);
    digitalWrite(12, 0);
    digitalWrite(13, 0);
    return;
  }

  // Line Following Logic
  int v = digitalRead(2);
  int s = digitalRead(3);

  if (v == 1 && s == 1) {
    digitalWrite(13, 1);
    digitalWrite(12, 0);
    digitalWrite(11, 1);
    digitalWrite(10, 0);
  }
  else if (v == 1 && s == 0) {
    digitalWrite(13, 0);
    digitalWrite(12, 1);
    digitalWrite(11, 1);
    digitalWrite(10, 0);
  }
  else if (v == 0 && s == 1) {
    digitalWrite(13, 1);
    digitalWrite(12, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 1);
  }
  else {
    digitalWrite(13, 0);
    digitalWrite(12, 1);
    digitalWrite(11, 0);
    digitalWrite(10, 1);
  }
}
