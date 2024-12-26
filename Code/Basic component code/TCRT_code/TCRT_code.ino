int motor_leftA = 0;   // pin0
int motor_LeftB = 1;   // pin1

int motor_rightA = 2;  // pin2
int motor_rightB = 3;  // pin3

int TCRT_Left = 26;
int TCRT_Center = 27;
int TCRT_Right = 28;
int TCRT_Output;


void setup() {

  Serial.begin(9600);
  pinMode(TCRT_Left, INPUT);
  pinMode(TCRT_Center, INPUT);
  pinMode(TCRT_Right, INPUT);
  pinMode(motor_leftA, INPUT);
  pinMode(motor_leftB, INPUT);
  pinMode(motor_rightA, INPUT);
  pinMode(motor_rightB, INPUT);
}

void loop() {
  TCRT_Output = analogRead(TCRT_Right);
  Serial.print("Right Reading ");
  Serial.println(TCRT_Output);
  delay(500);
}
