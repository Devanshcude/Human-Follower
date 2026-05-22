#include <AFMotor.h>
#include <NewPing.h>
#include <Servo.h>

// ================= SENSORS =================
#define RIGHT A2
#define LEFT  A3

#define TRIGGER_PIN A1
#define ECHO_PIN A0
#define MAX_DISTANCE 200

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

Servo myservo;

// ================= MOTORS =================
// M1 M2 = Left Side
// M3 M4 = Right Side

AF_DCMotor Motor1(1, MOTOR12_1KHZ);
AF_DCMotor Motor2(2, MOTOR12_1KHZ);
AF_DCMotor Motor3(3, MOTOR34_1KHZ);
AF_DCMotor Motor4(4, MOTOR34_1KHZ);

int distance = 0;
int Right_Value = 0;
int Left_Value = 0;

void setup()
{
  Serial.begin(9600);

  myservo.attach(10);
  myservo.write(90);

  pinMode(RIGHT, INPUT);
  pinMode(LEFT, INPUT);

  stopRobot();
}

void loop()
{
  delay(50);

  distance = sonar.ping_cm();

  Right_Value = digitalRead(RIGHT);
  Left_Value = digitalRead(LEFT);

  Serial.print("Distance: ");
  Serial.println(distance);

  if ((distance > 1) && (distance < 15))
  {
    moveForward();
  }
  else if ((Right_Value == 0) && (Left_Value == 1))
  {
    turnLeft();
    delay(150);
  }
  else if ((Right_Value == 1) && (Left_Value == 0))
  {
    turnRight();
    delay(150);
  }
  else
  {
    stopRobot();
  }
}

// ================= FUNCTIONS =================

void moveForward()
{
  Motor1.setSpeed(255);
  Motor2.setSpeed(255);
  Motor3.setSpeed(255);
  Motor4.setSpeed(255);

  Motor1.run(FORWARD);
  Motor2.run(FORWARD);
  Motor3.run(FORWARD);
  Motor4.run(FORWARD);
}

void turnLeft()
{
  Motor1.setSpeed(220);
  Motor2.setSpeed(220);
  Motor3.setSpeed(220);
  Motor4.setSpeed(220);

  Motor1.run(BACKWARD);
  Motor2.run(BACKWARD);

  Motor3.run(FORWARD);
  Motor4.run(FORWARD);
}

void turnRight()
{
  Motor1.setSpeed(220);
  Motor2.setSpeed(220);
  Motor3.setSpeed(220);
  Motor4.setSpeed(220);

  Motor1.run(FORWARD);
  Motor2.run(FORWARD);

  Motor3.run(BACKWARD);
  Motor4.run(BACKWARD);
}

void stopRobot()
{
  Motor1.run(RELEASE);
  Motor2.run(RELEASE);
  Motor3.run(RELEASE);
  Motor4.run(RELEASE);
}