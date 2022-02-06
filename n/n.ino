
#include <Servo.h>

String letter = String("n");

Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;

boolean ran = false;


void setup() {
  servo2.attach(2);
  servo3.attach(3); 
  servo4.attach(4); 
  servo5.attach(5); 
  servo6.attach(6); 
  servo7.attach(7);
  
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  servo7.write(0);

}

void loop() {
  if (letter == "n" || letter == "N") {
    if (ran == false) {
      delay(1000);
      servo7.write(180);
      servo6.write(180);
      servo4.write(180);
      servo3.write(180);
      delay(5000);
      servo7.write(0);
      servo6.write(0);
      servo4.write(0);
      servo3.write(0);
      delay(1000);
      exit(0);
    }
  }
  ran = true;
}
