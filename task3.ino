#define trig 6
#define echo 5
int distance=0,t=0;
int led = 9;
void setup() 
{
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() 
{
  
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  t=pulseIn(echo,HIGH);
  distance=t/57;
  delay(3000);
  if( distance!=342 ){
    analogWrite(led,255);
  }
  else 
    analogWrite(led,0);
  
   
}
