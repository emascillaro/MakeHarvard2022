
#include <Servo.h>

String letter = String("y");

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
//  
//  if(letter == "o" || letter == "O"){
//   delay(1000);
//   servo7.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "p" || letter == "P"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   servo5.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo6.write(0);
//   servo5.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "q" || letter == "Q"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   servo5.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo6.write(0);
//   servo5.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "r" || letter == "R"){
//   delay(1000);
//   servo7.write(180);
//   servo5.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo7.write(0);
//   servo5.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "s" || letter == "S"){
//   delay(1000);
//   servo6.write(180);
//   servo5.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo6.write(0);
//   servo5.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "t" || letter == "T"){
//   delay(1000);
//   servo6.write(180);
//   servo5.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo6.write(0);
//   servo5.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "u" || letter == "U"){
//    delay(1000);
//    servo7.write(180);
//    servo3.write(180);
//    servo2.write(180);
//    delay(5000);
//    servo2.write(0);
//    servo7.write(0);
//    servo3.write(0);
//    delay(1000);
//    exit(0);
//  } 
//  
//  if(letter == "v" || letter == "V"){
//    delay(1000);
//    servo7.write(180);
//    servo5.write(180);
//    servo3.write(180);
//    servo2.write(180);
//    delay(5000);
//    servo2.write(0);
//    servo7.write(0);
//    servo5.write(0);
//    servo3.write(0);
//    delay(1000);
//    exit(0);
//  } 
//  
//   if(letter == "w" || letter == "W"){
//   delay(1000);
//   servo6.write(180);
//   servo5.write(180);
//   servo4.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo6.write(0);
//   servo5.write(0);
//   servo4.write(0);
//   servo2.write(0);
//   delay(1000);
//   exit(0);
//  } 
//  
//  if(letter == "x" || letter == "X"){
//   delay(1000);
//   servo7.write(180);
//   servo6.write(180);
//   servo3.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo2.write(0);
//   servo7.write(0);
//   servo6.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
  if(letter == "y" || letter == "Y"){
   delay(1000);
   servo7.write(180);
   servo6.write(180);
   servo4.write(180);
   servo3.write(180);
   servo2.write(180);
   delay(5000);
   servo2.write(0);
   servo7.write(0);
   servo6.write(0);
   servo4.write(0);
   servo3.write(0);
   delay(1000);
   exit(0);
  }
//  
//  if(letter == "z" || letter == "Z"){
//   delay(1000);
//   servo7.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo2.write(0);
//   servo7.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "z" || letter == "Z"){
//   delay(1000);
//   servo7.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo2.write(0);
//   servo7.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == " "){
//   delay(1000);
//   delay(5000);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "."){
//   delay(1000);
//   servo5.write(180);
//   servo4.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo5.write(0);
//   servo4.write(0);
//   servo2.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == ","){
//   delay(1000);
//   servo5.write(180);
//   delay(5000);
//   servo5.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "!"){
//   delay(1000);
//   servo5.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo5.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "?"){
//   delay(1000);
//   servo5.write(180);
//   servo3.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo5.write(0);
//   servo3.write(0);
//   servo2.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == ";"){
//   delay(1000);
//   servo5.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo5.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == ":"){
//   delay(1000);
//   servo5.write(180);
//   servo4.write(180);
//   delay(5000);
//   servo5.write(0);
//   servo4.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "-"){
//   delay(1000);
//   servo3.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo3.write(0);
//   servo2.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "'"){
//   delay(1000);
//   servo3.write(180);
//   delay(5000);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "/"){
//   delay(1000);
//   servo6.write(180);
//   servo3.write(180);
//   delay(5000);
//   servo6.write(0);
//   servo3.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//  if(letter == "(" || letter == ")"){
//   delay(1000);
//   servo5.write(180);
//   servo4.write(180);
//   servo3.write(180);
//   servo2.write(180);
//   delay(5000);
//   servo5.write(0);
//   servo4.write(0);
//   servo3.write(0);
//   servo2.write(0);
//   delay(1000);
//   exit(0);
//  }
//  
//}
  
 
}
