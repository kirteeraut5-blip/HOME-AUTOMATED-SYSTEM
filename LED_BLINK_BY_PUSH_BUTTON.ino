#define led 4
#define button 8

void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(button,INPUT);
}

void loop(){
  bool x = digitalRead(button);
  Serial,print("button status =");
  Serial.println(x);

  if (x == 1){
    digitalWrite(led, HIGH);
    //Serial.print("LED"is turn ON);
  }
  else{
    digitalWrite(led,LOW);
    //Serial.print("LED" is turn OFF);
  }
}