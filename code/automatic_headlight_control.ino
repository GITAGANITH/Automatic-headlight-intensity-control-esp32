int ldrPin = 34;
int ledPin = 25;

void setup() {
  Serial.begin(115200);
  ledcAttach(ledPin, 5000, 8);
}

void loop() {
  int ldr = analogRead(ldrPin);

  int pwm = map(ldr, 0, 4095, 255, 50);
  pwm = constrain(pwm, 50, 255);

  ledcWrite(ledPin, pwm);

  Serial.print("LDR: ");
  Serial.print(ldr);
  Serial.print("  PWM: ");
  Serial.println(pwm);

  delay(50);
}
