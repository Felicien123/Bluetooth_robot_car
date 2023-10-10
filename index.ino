// Starting of Program
const int IN1 = 3;
const int IN2 = 4;
const int IN3 = 6;
const int IN4 = 7;
char val;

void setup() 
{  
pinMode(IN1, OUTPUT);  // Digital pin 10 set as output Pin
pinMode(IN2, OUTPUT);  // Digital pin 11 set as output Pin
pinMode(IN3, OUTPUT);  // Digital pin 12 set as output Pin
pinMode(IN4, OUTPUT);  // Digital pin 13 set as output Pin
Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
  val = Serial.read();
  Serial.println(val);
  }

  if( val == 'F') // Forward
    {
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);  
    }
  else if(val == 'B') // Backward
    {
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, LOW); 
  }

  else if(val == 'L') //Left
  {
    digitalWrite(IN1 , LOW);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , HIGH);
    digitalWrite(IN4 , HIGH);
  }
  else if(val == 'R') //Right
  {
   digitalWrite(IN1 , HIGH);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , LOW);
    digitalWrite(IN4 , HIGH);
  }
    
  else if(val == 'S') //Stop
  {
    digitalWrite(IN1 , HIGH);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , HIGH);
    digitalWrite(IN4 , HIGH);
  }
  else if(val == 'I') //Forward Right
  {
    digitalWrite(IN1 , HIGH);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , LOW);
    digitalWrite(IN4 , HIGH);
  }
//   else if(val == 'J') //Backward Right
//     {
//     digitalWrite(m1a, LOW);
//     digitalWrite(m1b, HIGH);
//     digitalWrite(m2a, LOW);
//     digitalWrite(m2b, LOW);
//     }
  else if(val == 'G') //Forward Left
  {
    digitalWrite(IN1 , LOW);
    digitalWrite(IN2 , HIGH);
    digitalWrite(IN3 , HIGH);
    digitalWrite(IN4 , HIGH);
  }
}  
//   else if(val == 'H') //Backward Left
//     {
//     digitalWrite(m1a, LOW);
//     digitalWrite(m1b, LOW);
//     digitalWrite(m2a, LOW);
//     digitalWrite(m2b, HIGH); 
//     }
// }
