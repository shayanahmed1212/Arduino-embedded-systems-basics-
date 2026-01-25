#define TRIG_PIN 9
#define ECHO_PIN 10
#define LED_PIN 6
#define BUZZER_PIN 5

void setup() {
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);
    Serial.begin(9600);  // For debugging
}

void loop() {
    long duration;
    int distance;

    // Trigger the ultrasonic sensor
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Read the echo response
    duration = pulseIn(ECHO_PIN, HIGH);
    distance = duration * 0.034 / 2; // Convert time to distance (cm)

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    if (distance > 0 && distance <= 10) {
        digitalWrite(LED_PIN, HIGH);  // Turn on LED
        digitalWrite(BUZZER_PIN, HIGH); // Turn on buzzer
    } else {
        digitalWrite(LED_PIN, LOW);   // Turn off LED
        digitalWrite(BUZZER_PIN, LOW); // Turn off buzzer
    }

    delay(500); // Wait a bit before next measurement
}
