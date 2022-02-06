
#include <Servo.h>

String letter = String("4");

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
  
//  if(letter == "a" || letter == "A" || letter == "1"){
//    delay(1000);
//    servo7.write(180);
//    delay(5000);
//    servo7.write(0);
//    delay(1000);
//    exit(0);
//  } 
//  
//  if(letter == "b" || letter == "B" || letter == "2"){
//    delay(1000);
//    servo7.write(180);
//    servo5.write(180);
//    delay(5000);
//    servo7.write(0);
//    servo5.write(0);
//    delay(1000);
//    exit(0);
//  } 
//  
//   if(letter == "c" || letter == "C" || letter == "3"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo6.write(0);
//   delay(1000);
//   exit(0);
//  } 
//  
  if(letter == "d" || letter == "D" || letter == "4"){
   delay(1000);
   servo7.write(180);
   servo6.write(180);
   servo4.write(180);
   delay(5000);
   servo7.write(0);
   servo6.write(0);
   servo4.write(0);
   delay(1000);
   exit(0);
  }
//  
//  if(letter == "e" || letter == "E" || letter == "5"){
//   delay(1000);
//   servo7.write(180);
//   servo4.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo4.write(0);
//   delay(1000);
//   exit(0);
//  }
 
 
}
