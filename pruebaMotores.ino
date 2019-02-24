#include <AFMotor.h>
AF_Stepper motor1(256, 1);  // Puerta M1 M2
AF_Stepper motor2(256, 2);  // Puerta M3 M4

void setup()
 {
    Serial.begin(9600);
    Serial.println("Test de motores");
    motor1.setSpeed(20); // 20 rpm
    motor2.setSpeed(20); // 20 rpm
 }

 void loop()
 {  
     motor1.step(256, FORWARD, DOUBLE);
     motor2.step(256, FORWARD, DOUBLE);
     delay(500);
     motor1.step(256, BACKWARD, DOUBLE);
     motor2.step(256, BACKWARD, DOUBLE);
     delay(500);
 }
