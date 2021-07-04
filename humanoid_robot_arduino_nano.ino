//Coded by Robotic Thamizha Youtube Channel. Go and Subscribe my Channel Robotic Thamizha for more videos which will be dealing with arduino
#include <Servo.h>   //Servo library. This is standard library. (Sketch -> Include Library -> Servo)

String voice;

Servo myServo1;//define servo name
Servo myServo2;//define servo name
Servo myServo3;
Servo myServo4;
Servo myServo6;
Servo myservo5;

void setup()
{
  Serial.begin(9600); //start serial communication
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  myServo1.attach(11);//define our servo pin (the motor shield servo2 input = digital pin 11)
  myServo2.attach(10);//define our servo pin (the motor shield servo3 input = digital pin 10)
  myServo3.attach(5);
  myServo4.attach(6);
  myServo6.attach(7);
  myservo5.attach(3);
  myservo5.write(90);
  myServo6.write(90);
  myServo1.write(90);
  myServo2.write(90);
  myServo3.write(90);
  myServo4.write(90);
}


void loop()
{
  while (Serial.available()) { //Check if there is an available byte to read
    delay(10); //Delay added to make thing stable
    char c = Serial.read(); //Conduct a serial read
    if (c == '#') {
      break; //Exit the loop when the # is detected after the word
    }
    voice += c; //Shorthand for voice = voice + c
  }
  if (voice.length() > 0) {

     if (voice == "*Jarvis relax your hand") {
      relax_hand_robot();
    }
    if (voice == "*Jarvis hands close") {
      hands_close_robot();
    }
     if (voice == "*Jarvis wake up") {
      wake_up_robot();
    }
    else if (voice == "*Jarvis turn on light") {
      light_robot();
    }
    else if (voice == "*Jarvis turn off light") {
      lightoff_robot();
    }
    else if (voice == "*Jarvis clap") {
      clap_robot();
    }
    else if (voice == "*Jarvis do exercise") {
      exercise_robot();
    }
    else if (voice == "*Jarvis hands up") {
      hands_up_robot();
    }
    else if (voice == "*Jarvis hands down") {
      hands_down_robot();
    }
    else if (voice == "*Jarvis hands open") {
      hands_open_robot();
    }
    else if (voice == "*Jarvis say hai") {
      hand_robot();
    }
    else if (voice == "*Jarvis se hai") {
      hand_robot();
    }
    else if (voice == "*Jarvis stop") {
      stop_robot();
    }
    else if (voice == "*Jarvis attack") {
      shoot_robot();
    }
     else if (voice == "*Jarvis watch right") {
      see_right_robot();
    }
     else if (voice == "*Jarvis watch left") {
     see_left_robot();
    }
    else if (voice == "*Jarvis which is right") {
      w_right_robot();
    }
    else if (voice == "*Jarvis rotate your head") {
      head_rotate_robot();
    }
    else if (voice == "*Jarvis which is left") {
      w_left_robot();
    }
    voice = ""; //Reset the variable after initiating
  }
}

void wake_up_robot()
{
  digitalWrite(9, HIGH);  digitalWrite(8, HIGH);
  delay(100);               delay(100);
  digitalWrite(9, LOW);   digitalWrite(8, LOW);
  delay(100);             delay(100);
  digitalWrite(9, HIGH);   digitalWrite(8, HIGH);
  delay(100);             delay(100);
  digitalWrite(9, LOW);   digitalWrite(8, HIGH);
  delay(100);            delay(100);
  digitalWrite(9, HIGH);   digitalWrite(8, LOW);
  delay(100);                 delay(100);
  digitalWrite(9, LOW);   digitalWrite(8, HIGH);
  delay(100);             delay(100);
  digitalWrite(9, HIGH);   digitalWrite(8, LOW);
  delay(100);              delay(100);
  digitalWrite(9, LOW);   digitalWrite(8, HIGH);
  delay(100);                  delay(100);
  digitalWrite(9, HIGH);   digitalWrite(8, LOW);
  delay(100);                    delay(100);
  digitalWrite(9, LOW);   digitalWrite(8, HIGH);
  delay(100);            delay(100);
  digitalWrite(9, HIGH);   digitalWrite(8, HIGH);
  delay(100);             delay(100);
  digitalWrite(9, LOW);   digitalWrite(8, LOW);
  delay(100);             delay(100);
  digitalWrite(9, HIGH);   digitalWrite(8, HIGH);
  delay(5000);             delay(100);
  digitalWrite(9, LOW);   digitalWrite(8, LOW);
  delay(500);                delay(100);
  
}


void relax_hand_robot()
{
  myServo1.write(180);
  delay(500);
  myServo1.write(0);
  delay(500);
  myServo1.write(90);
  delay(100);
  myServo3.write(180);
  delay(500);
  myServo3.write(90);
  delay(500);
  myServo2.write(0);
  delay(500);
  myServo2.write(180);
  delay(500);
  myServo2.write(90);
  delay(100);
  myServo4.write(0);
  delay(500);
  myServo4.write(90);
  delay(500);
  
}

void see_right_robot()
{
  myServo6.write(180); 
  delay(500);           
  myServo6.write(90); 
  delay(500);            
}

void head_rotate_robot()
{
  myServo6.write(180);
  delay(700);
  myServo6.write(0);
  delay(500);
  myServo6.write(90);
  delay(500);
}

void see_left_robot()
{
  myServo6.write(0);
  delay(500);
  myServo6.write(90);
  delay(500);
}
void w_left_robot()
{
  myServo4.write(0); myServo6.write(0);
  delay(1500);        delay(1500);
  myServo4.write(90); myServo6.write(0);
  delay(500);          delay(500);
}


void clap_robot()
{
  myServo1.write(180); myServo2.write(0);
  delay(500);          delay(500);
  myServo3.write(180); myServo4.write(0);
  delay(500);          delay(500);
  myServo3.write(90); myServo4.write(90);
  delay(500);          delay(500);
  myServo3.write(180); myServo4.write(0);
  delay(500);          delay(500);
  myServo3.write(90); myServo4.write(90);
  delay(500);          delay(500);
  myServo3.write(180); myServo4.write(0);
  delay(500);          delay(500);
  myServo3.write(90); myServo4.write(90);
  delay(500);          delay(500);
  myServo1.write(90); myServo2.write(90);
  delay(500);          delay(500);
}


void hands_up_robot()
{
  myServo2.write(0);   myServo1.write(180);
  delay(2000);           delay(2000);
}


void hands_down_robot()
{
  myServo2.write(90);  myServo1.write(90);
  delay(500);            delay(500);
}



void hands_close_robot()
{
  myServo4.write(90);  myServo3.write(90);
  delay(500);         delay(500);
}



void hands_open_robot()
{
  myServo4.write(0);  myServo3.write(180);
  delay(500);          delay(500);

}

void w_right_robot()
{
  myServo3.write(180); myServo6.write(180); 
  delay(1500);          delay(1500);
  myServo3.write(90);  myServo6.write(90);
  delay(500);             delay(500);
}


void exercise_robot()
{
  myServo1.write(180);  myServo2.write(0);
  delay(1000);        delay(1000);
  myServo3.write(180); myServo4.write(0);
  delay(500);           delay(500);
  myServo3.write(90); myServo4.write(90);
  delay(500);           delay(500);
  myServo1.write(90); myServo2.write(90);
  delay(500);         delay(500);
  myServo1.write(180);  myServo2.write(0);
  delay(1000);        delay(1000);
  myServo3.write(180); myServo4.write(0);
  delay(500);           delay(500);
  myServo3.write(90); myServo4.write(90);
  delay(500);           delay(500);
   myServo1.write(90); myServo2.write(90);
  delay(500);         delay(500);
}  


void light_robot()
{
  digitalWrite(2, HIGH);
  delay(500);
}


void lightoff_robot()
{
  digitalWrite(2, LOW);
  delay(500);
}

void hand_robot()
{
  myServo1.write(180);
  delay(3000);
  myServo1.write(90);
  delay(500);
}

void shoot_robot()
{
  myServo2.write(0);   digitalWrite(4, HIGH);
  delay(5000);         delay(100);
                       digitalWrite(4, LOW);
                       delay(100);

  digitalWrite(4, HIGH);
  delay(100);
   digitalWrite(4, HIGH);
  delay(100);
   digitalWrite(4, HIGH);
  delay(100);
   digitalWrite(4, HIGH);
  delay(100);
   digitalWrite(4, HIGH);
  delay(100);
   digitalWrite(4, HIGH);
  delay(100);
}

void stop_robot ()
{
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
   myServo2.write(90);
   delay(500);
  
}
