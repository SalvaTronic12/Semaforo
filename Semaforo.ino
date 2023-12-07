// semaforo


int ledR1 = 13;
int ledA1 = 12;
int ledV1 = 11;

int ledR2 = 10;
int ledA2 = 9;
int ledV2 = 8;

void setup(){
 for(int i = 8;i<14;i++){
  pinMode(i,OUTPUT);
 }
 
}
void loop(){
  
digitalWrite(ledV1,HIGH);
digitalWrite(ledR1,LOW);
digitalWrite(ledA1,LOW);


digitalWrite(ledV2,LOW);
digitalWrite(ledR2,HIGH);
digitalWrite(ledA2,LOW);


delay(4000);


digitalWrite(ledV1,LOW);
digitalWrite(ledR1,LOW);


digitalWrite(ledA1,HIGH);
delay(500);
digitalWrite(ledA1,LOW);
delay(500);
digitalWrite(ledA1,HIGH);
delay(500);
digitalWrite(ledA1,LOW);
delay(500);
digitalWrite(ledA1,HIGH);
delay(500);
digitalWrite(ledA1,LOW);
delay(500);


digitalWrite(ledV1,LOW);
digitalWrite(ledR1,HIGH);
digitalWrite(ledA1,LOW);


digitalWrite(ledV2,HIGH);
digitalWrite(ledR2,LOW);
digitalWrite(ledA2,LOW);

delay(4000);


digitalWrite(ledV2,LOW);
digitalWrite(ledR2,LOW);


digitalWrite(ledA2,HIGH);
delay(500);
digitalWrite(ledA2,LOW);
delay(500);
digitalWrite(ledA2,HIGH);
delay(500);
digitalWrite(ledA2,LOW);
delay(500);
digitalWrite(ledA2,HIGH);
delay(500);
digitalWrite(ledA2,LOW);
delay(500);




}
