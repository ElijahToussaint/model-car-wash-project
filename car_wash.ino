// Motor Driver 1
const int AIN1_1 = 14; // Motor 1 direction 1
const int AIN2_1 = 15; // Motor 1 direction 2
const int BIN1_1 = 16; // Motor 2 direction 1
const int BIN2_1 = 17; // Motor 2 direction 2
const int PWMA_1 = 18; // Motor 1 speed
const int PWMB_1 = 19; // Motor 2 speed

// Motor Driver 2
const int AIN1_2 = 20; // Motor 3 direction 1
const int AIN2_2 = 21; // Motor 3 direction 2
const int BIN1_2 = 40; // Motor 4 direction 1
const int BIN2_2 = 41; // Motor 4 direction 2
const int PWMA_2 = 24; // Motor 3 speed
const int PWMB_2 = 25; // Motor 4 speed

// Motor Driver 3
const int AIN1_3 = 26; // Motor 5 direction 1
const int AIN2_3 = 27; // Motor 5 direction 2
const int BIN1_3 = 38; // Motor 6 direction 1
const int BIN2_3 = 39; // Motor 6 direction 2
const int PWMA_3 = 22; // Motor 5 speed
const int PWMB_3 = 23; // Motor 6 speed

void setup() {
  // put your setup code here, to run once:
  pinMode(AIN1_1, OUTPUT);
  pinMode(AIN2_1, OUTPUT);
  pinMode(BIN1_1, OUTPUT);
  pinMode(BIN2_1, OUTPUT);
  pinMode(PWMA_1, OUTPUT);
  pinMode(PWMB_1, OUTPUT);

  pinMode(AIN1_2, OUTPUT);
  pinMode(AIN2_2, OUTPUT);
  pinMode(BIN1_2, OUTPUT);
  pinMode(BIN2_2, OUTPUT);
  pinMode(PWMA_2, OUTPUT);
  pinMode(PWMB_2, OUTPUT);

  pinMode(AIN1_3, OUTPUT);
  pinMode(AIN2_3, OUTPUT);
  pinMode(BIN1_3, OUTPUT);
  pinMode(BIN2_3, OUTPUT);
  pinMode(PWMA_3, OUTPUT);
  pinMode(PWMB_3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(AIN1_1, LOW);
  digitalWrite(AIN2_1, HIGH);
  digitalWrite(BIN1_1, HIGH);
  digitalWrite(BIN2_1, LOW);
  analogWrite(PWMA_1, 20);
  analogWrite(PWMB_1, 20);

  digitalWrite(AIN1_2, LOW);
  digitalWrite(AIN2_2, HIGH);
  digitalWrite(BIN1_2, HIGH);
  digitalWrite(BIN2_2, LOW);
  analogWrite(PWMA_2, 20);
  analogWrite(PWMB_2, 20);

  digitalWrite(AIN1_3, LOW);
  digitalWrite(AIN2_3, HIGH);
  digitalWrite(BIN1_3, HIGH);
  digitalWrite(BIN2_3, LOW);
  analogWrite(PWMA_3, 20);
  analogWrite(PWMB_3, 20);
}
