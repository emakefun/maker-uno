#define DIR1 4  // define direction 4 port
#define PWM1 5  // define pwm1 5 port
#define DIR2 7  // define direction 7 port
#define PWM2 6  // define pwm1 6 port

void setup() {
  pinMode(DIR1, OUTPUT);
  pinMode(PWM1, OUTPUT);
  pinMode(DIR2, OUTPUT);
  pinMode(PWM2, OUTPUT);
}

void loop() {
  // forward speed 255
  digitalWrite(DIR1, HIGH);
  digitalWrite(PWM1, 255);
  digitalWrite(DIR2, HIGH);
  digitalWrite(PWM2, 255);
  delay(2000);
  // reversal speed 255
  digitalWrite(DIR1, LOW);
  digitalWrite(PWM1, 255);
  digitalWrite(DIR2, LOW);
  digitalWrite(PWM2, 255);
  delay(2000);
}
