 #define LED1 2
#define LED2 3


void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  blinkLED(LED1);

}


void blinkLED(int pin){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, HIGH);
  delay(1000);

}
