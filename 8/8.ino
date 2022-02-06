
#include <Servo.h>

String letter = String("8");

Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;


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
  
//  if(letter == "f" || letter == "F" || letter == "6"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   servo5.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo6.write(0);
//   servo5.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "g" || letter == "G" || letter == "7"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   servo5.write(180);
//   servo4.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo6.write(0);
//   servo5.write(0);
//   servo4.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
  if(letter == "h" || letter == "H" || letter == "8"){
   delay(1000);
   servo7.write(180);
   servo5.write(180);
   servo4.write(180);
   delay(5000);
   servo7.write(0);
   servo5.write(0);
   servo4.write(0);
   delay(1000);
   exit(0);
  }
//  
//  if(letter == "i" || letter == "I" || letter == "9"){
//   delay(1000);
//   servo6.write(180);
//   servo5.write(180);
//   delay(5000);
//   servo6.write(0);
//   servo5.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "j" || letter == "J" || letter == "0"){
//   delay(1000);
//   servo6.write(180);
//   servo5.write(180);
//   servo4.write(180);
//   delay(5000);
//   servo6.write(0);
//   servo5.write(0);
//   servo4.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "k" || letter == "K"){
//    delay(1000);
//    servo7.write(180);
//    servo3.write(180);
//    delay(5000);
//    servo7.write(0);
//    servo3.write(0);
//    delay(1000);
//    exit(0);
//  } 
//  
//  if(letter == "l" || letter == "L"){
//    delay(1000);
//    servo7.write(180);
//    servo5.write(180);
//    servo3.write(180);
//    delay(5000);
//    servo7.write(0);
//    servo5.write(0);
//    servo3.write(0);
//    delay(1000);
//    exit(0);
//  } 
//  
//   if(letter == "m" || letter == "M"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo6.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  } 
//  
//  if(letter == "n" || letter == "N"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo6.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
 
}
