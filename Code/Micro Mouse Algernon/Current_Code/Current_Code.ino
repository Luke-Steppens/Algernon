// Algernon Current Code



// LED pins
int ledR = 20;
int ledW = 18;
int ledB = 19;

// motor pins
int motor_leftA = 0;   // pin0
int motor_leftB = 1;   // pin1
int motor_rightB = 2;  // pin2
int motor_rightA = 3;  // pin3

// TCRT pins
int TCRT_Left = 26;
int TCRT_Front = 27;
int TCRT_Right = 28;
int TCRT_Output;

bool Front = false;
bool Left = false;
bool Right = false;

int drive_Speed = 35;
int turn_Speed = 35;

void setup() {

  Serial.begin(9600);

  // TCRTS
  pinMode(TCRT_Left, OUTPUT);
  pinMode(TCRT_Front, OUTPUT);
  pinMode(TCRT_Right, OUTPUT);

  // motors
  pinMode(motor_leftA, OUTPUT);
  pinMode(motor_leftB, OUTPUT);
  pinMode(motor_rightA, OUTPUT);
  pinMode(motor_rightB, OUTPUT);

  // LEDS
  pinMode(ledR, OUTPUT);
  pinMode(ledW, OUTPUT);
  pinMode(ledB, OUTPUT);
}

void loop() {

  checkTcrt();  // Continuously print sensor readings for debugging

  


    
  Front = false;
  Left = false;
  Right = false;

  checkDistance();
  
  if (analogRead(TCRT_Front) < 950) {
    Serial.println("Front sensor triggered");
    Front = true;

  }
  if (analogRead(TCRT_Left) < 980) {
    Serial.println("Left sensor triggered");
    Left = true;

  }
  if (analogRead(TCRT_Right) < 930) {
    Serial.println("Right sensor triggered");
    Right = true;

  }

  if (!Front){
    motorsForward();
  }

  else if (!Left){
    turnLeft();
  }

  else{
    turnRight();
  }
  
}

//states

enum State_enum {TURN_LEFT, TURN_RIGHT, FORWARD, STOP};
enum Sensors_enum {NONE, FRONT_LEFT, FRONT_RIGHT, TCRT_FRONT, TCRT_ALL};

static Sensors_enum sensors;
static State_enum state;

// State machine function
void state_machine_run() {
  Serial.print("Current State: ");
  Serial.println(state);

  // Check if FRONT TCRT detects NO object within threshold change to FORWARD
  if (TCRT_Front > 1005) {
    Serial.println("Front sensor triggered");

  }
}




// functions
void checkTcrt() {
  // 1cm = 543 - 548, 2cm = 851 - 858, 3cm = 940 - 948,
  // 4cm = 974 - 986, 5cm = 993 - 1002, 6cm = 1002 - 1023,
  // 7cm = 1007 - 1015, 8cm = 1008 - 1018
  Serial.print(" Right Reading ");
  Serial.print(analogRead(TCRT_Right));

  // 1cm = 567 - 569, 2cm = 869 - 876, 3cm = 950 - 959,
  // 4cm = 980 - 990, 5cm = 995 - 1005, 6cm = 1003 - 1013,
  // 7cm = 1010 - 1018, 8cm = 1013 - 1021 
  Serial.print("| Left Reading ");
  Serial.print(analogRead(TCRT_Left));

  // 1cm = 691 - 700, 2cm = 892 - 898, 3cm 953 - 964,
  // 4cm = 981 - 990, 5cm = 994 - 1003, 6cm 1001 - 1011,
  // 7cm = 1007 - 1015, 8cm = 1007 - 1019
  Serial.print("| Center Reading ");
  Serial.println(analogRead(TCRT_Front));
  delay(500);
}

void checkDistance() {
  if (analogRead(TCRT_Right) < 980) {
    digitalWrite(ledW, LOW);
  }
  if (analogRead(TCRT_Right) > 980) {
    digitalWrite(ledW, HIGH);
  }
  if (analogRead(TCRT_Left) < 990) {
    digitalWrite(ledB, LOW);
  }
  if (analogRead(TCRT_Left) > 990) {
    digitalWrite(ledB, HIGH);
  }
  if (analogRead(TCRT_Front) < 1005) {
    digitalWrite(ledR, LOW);
  }
  if (analogRead(TCRT_Front) > 1005) {
    digitalWrite(ledR, HIGH);
  }
}

void turnLeft() {
  analogWrite(motor_leftA, -turn_Speed);
  analogWrite(motor_leftB, turn_Speed);
  analogWrite(motor_rightA, turn_Speed);
  analogWrite(motor_rightB, -turn_Speed);
}

void turnRight() {
  analogWrite(motor_leftA, turn_Speed);
  analogWrite(motor_leftB, -turn_Speed);
  analogWrite(motor_rightA, -turn_Speed);
  analogWrite(motor_rightB, turn_Speed);
}

void motorsForward() {

  analogWrite(motor_leftA, drive_Speed);
  analogWrite(motor_leftB, -drive_Speed);
  analogWrite(motor_rightA, drive_Speed);
  analogWrite(motor_rightB, -drive_Speed);
  
}

void allLeds() {
  digitalWrite(ledR, HIGH);
  digitalWrite(ledW, HIGH);
  digitalWrite(ledB, HIGH);
}
