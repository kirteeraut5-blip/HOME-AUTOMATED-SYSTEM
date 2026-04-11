 #define pot A0
 #define led1 2--
 #define led2 7
 #define led3 8

 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x = analogRead(pot);
  Serial.print("POT Value = ");
  Serial.println(x);

   if(x > 0 && x<=100){
    digitalWrite(led1, HIGH);
   }
   else if (x > 100 && x<=200){
    digitalWrite(led2, HIGH);
    digitalWrite(led1, LOW);
   }
    else if (x > 200 && x<=300){
      digitalWrite(led3, HIGH);
      digitalWrite(led2,LOW);
    }

    else{
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
    }
}
r setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
