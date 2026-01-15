// Define motor control pins
#define IN1 2   // Left motor 1
#define IN2 3   // Left motor 2
#define IN3 4   // Right motor 1
#define IN4 5  // Right motor 2

void setup() {
    // Set motor control pins as outputs
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);

    // Set initial motor speed (0-255)
}

void loop() {
    // Move forward
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}
