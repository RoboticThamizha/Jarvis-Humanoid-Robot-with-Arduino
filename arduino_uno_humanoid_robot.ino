String voice;

const int LeftMotorForward = A0;
const int LeftMotorBackward = A1;
const int RightMotorForward = A2;
const int RightMotorBackward = A3;

void setup()
{
Serial.begin(9600); //start serial communication
  
  pinMode(RightMotorForward, OUTPUT);
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(LeftMotorBackward, OUTPUT);
  pinMode(RightMotorBackward, OUTPUT);

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
    if (voice == "*Jarvis come forward") {
      forward_robot();
    }
    if (voice == "*jarvis come forward") {
      forward_robot();
    }
    if (voice == "*come forward") {
      forward_robot();
    }
    if (voice == "*move forward") {
      forward_robot();
    }
    else if (voice == "*Jarvis turn right") {
      right_robot();
    }
    else if (voice == "*jarvis turn right") {
      right_robot();
    }
    else if (voice == "*turn right") {
      right_robot();
    }
    else if (voice == "*Jarvis turn left") {
      left_robot();
    }
    else if (voice == "*jarvis turn left") {
      left_robot();
    }
    else if (voice == "*turn left") {
      left_robot();
    }
    voice = ""; //Reset the variable after initiating
  }
}


void forward_robot()
{
    digitalWrite(LeftMotorForward, HIGH);   
    digitalWrite(RightMotorForward, HIGH);  
                                             
    digitalWrite(LeftMotorBackward, LOW);   
    digitalWrite(RightMotorBackward, LOW);  
                                            
     delay(3000);                         
                                             
     digitalWrite(LeftMotorForward, LOW);    
    digitalWrite(RightMotorForward, LOW);   
  
     digitalWrite(LeftMotorBackward, LOW);
     digitalWrite(RightMotorBackward, LOW);
}

void back_robot()
{
 digitalWrite(LeftMotorBackward, HIGH);
  digitalWrite(RightMotorBackward, HIGH);
  
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorForward, LOW);

  delay(3000);

  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorBackward, LOW);
  
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorForward, LOW); 
}

void right_robot()
{
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorBackward, HIGH);
  
  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorForward, LOW);
  
  delay(1500);
  
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorForward, HIGH);
  
  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorBackward, LOW);
 
   digitalWrite(RightMotorForward, LOW);
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorBackward, LOW);
  digitalWrite(LeftMotorBackward, LOW);
}


void left_robot()
{
 digitalWrite(LeftMotorBackward, HIGH);
  digitalWrite(RightMotorForward, HIGH);
  
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorBackward, LOW);

  delay(1500);
  
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorForward, HIGH);
  
  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorBackward, LOW);

   digitalWrite(RightMotorForward, LOW);
  digitalWrite(LeftMotorForward, LOW);
  digitalWrite(RightMotorBackward, LOW);
  digitalWrite(LeftMotorBackward, LOW);
}
