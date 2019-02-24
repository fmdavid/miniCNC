#include <Servo.h>                    // Incluir la librería Servo
Servo servo1;                         // Crear un objeto tipo Servo llamado servo1
int angulo = 0 ;

void setup()
    {
      Serial.begin(9600);     // inicia la comunicación serial
        servo1.attach(8) ;             // Conectar servo1 al pin 9
    }

void loop()
    {
        for(angulo  = 20; angulo  <= 50; angulo  += 1)   //incrementa angulo 1 grado
            {
                 servo1.write(angulo);
                 Serial.print("ANGULO: ");
                  Serial.println(angulo);
                 delay(10);
            }
        delay(250);
        for(angulo  = 50; angulo  >=20; angulo  -=1 )    //decrementa angulo 1 grado
            {
                 servo1.write( angulo );
                 Serial.print("ANGULO: ");
                 Serial.println(angulo);
                 delay(10);
            }
        delay(250);
    }
