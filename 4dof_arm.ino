#include <Wire.h> 
#include <Adafruit_PWMServoDriver.h> 
 
Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver(); 
 
#define servo1 0 
#define servo2 1 
#define servo3 2 
#define servo4 3 
 
void setup() { 
  Serial.begin(9600); 
  PWM.begin(); 
  PWM.setPWMFreq(60); 
  PWM.setPWM(servo1, 0, 480); 
  PWM.setPWM(servo2, 0, 150); 
  PWM.setPWM(servo3, 0, 300); 
  PWM.setPWM(servo4, 0, 200); 
  delay(3000); 
} 
 
void loop() { 
 
  for (int S1value = 480; S1value >= 300; S1value--) { 
    PWM.setPWM(servo1, 0, S1value); 
    delay(10); 
  } 
 
  for (int S2value = 150; S2value <= 380; S2value++) { 
    PWM.setPWM(servo2, 0, S2value); 
    delay(10); 
  } 
 
  for (int S3value = 300; S3value <= 380; S3value++) { 
    PWM.setPWM(servo3, 0, S3value); 
    delay(10); 
  } 
 
  for (int S4value = 200; S4value <= 350; S4value++) { 
    PWM.setPWM(servo4, 0, S4value); 
    delay(10);
  }
  delay(2000); 
  for (int S4value = 350; S4value > 200; S4value--) { 
    PWM.setPWM(servo4, 0, S4value); 
    delay(10); 
  } 
 
  for (int S3value = 380; S3value > 300; S3value--) { 
    PWM.setPWM(servo3, 0, S3value); 
    delay(10); 
  } 
 
  for (int S2value = 380; S2value > 150; S2value--) { 
    PWM.setPWM(servo2, 0, S2value); 
    delay(10); 
  } 
 
  for (int S1value = 300; S1value < 550; S1value++) { 
    PWM.setPWM(servo1, 0, S1value); 
    delay(10); 
  } 
  ////////////////////// 
  for (int S2value = 150; S2value <= 380; S2value++) { 
    PWM.setPWM(servo2, 0, S2value); 
    delay(10); 
  } 
 
  for (int S3value = 300; S3value <= 380; S3value++) { 
    PWM.setPWM(servo3, 0, S3value); 
    delay(10); 
  } 
 
  for (int S4value = 200; S4value <= 350; S4value++) { 
    PWM.setPWM(servo4, 0, S4value); 
    delay(10); 
  } 
 
  for (int S4value = 350; S4value > 200; S4value--) { 
    PWM.setPWM(servo4, 0, S4value); 
    delay(10); 
  } 
   for (int S3value = 380; S3value > 300; S3value--) { 
    PWM.setPWM(servo3, 0, S3value); 
    delay(10); 
  } 
 
  for (int S2value = 380; S2value > 150; S2value--) { 
    PWM.setPWM(servo2, 0, S2value); 
    delay(10); 
  } 
 
  for (int S1value = 550; S1value > 480; S1value--) { 
    PWM.setPWM(servo1, 0, S1value); 
    delay(10); 
  } 
}