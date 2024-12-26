
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
int TCRT_Center = 27;
int TCRT_Right = 28;
int TCRT_Output;


void setup() {

  Serial.begin(9600);

  // TCRTS
  pinMode(TCRT_Left, OUTPUT);
  pinMode(TCRT_Center, OUTPUT);
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
  
  //checkTcrt();

  //checkDistance();

  //turnLeft();

  allLeds();
  

  
}


// functions
void checkTcrt(){
  Serial.print(" Right Reading ");
  Serial.print(analogRead(TCRT_Right));
  Serial.print("| Left Reading ");
  Serial.print(analogRead(TCRT_Left));
  Serial.print("| Center Reading ");
  Serial.println(analogRead(TCRT_Center));
  delay(500);
}

void checkDistance(){
  if (analogRead(TCRT_Right) < 980){
    digitalWrite(ledW, LOW);
  }
  if (analogRead(TCRT_Right) > 980){
    digitalWrite(ledW, HIGH);
  }
  if (analogRead(TCRT_Left) < 990){
    digitalWrite(ledB, LOW);
  }
  if (analogRead(TCRT_Left) > 990){
    digitalWrite(ledB, HIGH);
  }
  if (analogRead(TCRT_Center) < 1005){
    digitalWrite(ledR, LOW);
  }
  if (analogRead(TCRT_Center) > 1005){
    digitalWrite(ledR, HIGH);
  }
}

void turnLeft(){
  analogWrite(motor_leftA, -35);
  analogWrite(motor_leftB, 35);
  analogWrite(motor_rightA, 35);
  analogWrite(motor_rightB, -35);
}

void turnRight(){
  analogWrite(motor_leftA, 35);
  analogWrite(motor_leftB, -35);
  analogWrite(motor_rightA, -35);
  analogWrite(motor_rightB, 35);
}

void motorsForward(){
  
  digitalWrite(motor_leftA, HIGH);
  digitalWrite(motor_leftB, LOW);
  digitalWrite(motor_rightA, HIGH);
  digitalWrite(motor_rightB, LOW);

}

void allLeds(){
  digitalWrite(ledR, HIGH);
  digitalWrite(ledW, HIGH);
  digitalWrite(ledB, HIGH);
}
