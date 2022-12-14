#define DIR1 4  // define direction 4 port
#define PWM1 5  // define pwm1 5 port
#define DIR2 7  // define direction 7 port
#define PWM2 6  // define pwm2 6 port

void setup() {
  Serial.begin(9600);
  pinMode(DIR1, OUTPUT);
  pinMode(PWM1, OUTPUT);
  pinMode(DIR2, OUTPUT);
  pinMode(PWM2, OUTPUT);
  Serial.println("Starting......");
}

void loop() {
  // forward speed 255
  Serial.println("M1,M2 Forward");
  digitalWrite(DIR1, HIGH);
  digitalWrite(PWM1, 255);
  digitalWrite(DIR2, HIGH);
  digitalWrite(PWM2, 255);
  delay(2000);
  // reversal speed 255
  Serial.println("M1,M2 Reversal");
  digitalWrite(DIR1, LOW);
  digitalWrite(PWM1, 255);
  digitalWrite(DIR2, LOW);
  digitalWrite(PWM2, 255);
  delay(2000);
  // Stop speed 255
  Serial.println("M1,M2 Stop");
  digitalWrite(DIR1, LOW);
  digitalWrite(PWM1, LOW);
  digitalWrite(DIR2, LOW);
  digitalWrite(PWM2, LOW);
  delay(2000);
}
