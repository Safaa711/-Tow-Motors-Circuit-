//Motor1
#define En1 10
#define IN1 9
#define IN2 8
//Motor2
#define En2 11
#define IN3 12
#define IN4 13

void setup(){
  pinMode (En1,OUTPUT);
  pinMode (IN1,OUTPUT);
  pinMode (IN2,OUTPUT);
  pinMode (En2,OUTPUT);
  pinMode (IN3,OUTPUT);
  pinMode (IN4,OUTPUT);
}
void loop(){
  digitalWrite (IN1,HIGH);
  digitalWrite (IN2,LOW);
  analogWrite (En1,120);
  digitalWrite (IN3,HIGH);
  digitalWrite (IN4,LOW);
  analogWrite (En2,120);
  
}
