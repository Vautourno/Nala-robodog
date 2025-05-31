#include <Servo.h>
int angle = 540; // Valeur entre 540 et 2400 max
// Creation of servo's object
Servo servo_top;
// Servo servo_mid;
// Servo servo_bot;

void setup() {
  Serial.begin(9600);
  // Attachment servo -> pin
  servo_top.attach(A2);
  // servo_mid.attach(A1);
  // servo_bot.attach(A0);

  InitPos();
}

void loop() {
  // empty loop
  servo_top.write(angle);
  delay(50);
  Serial.println(angle);
  angle = angle + 2;
  
  // servo_top.write(0);
}

void InitPos(void)
{
  servo_top.write(50);
  // servo_mid.write(0);
  // servo_bot.write(0);
}
