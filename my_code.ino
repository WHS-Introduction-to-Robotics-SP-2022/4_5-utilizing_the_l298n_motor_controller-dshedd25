void setup() {
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
analogWrite(10,255);
delay(5000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
analogWrite(10,0);
delay(5000);
}



int a;
void setup() {
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

analogWrite(10,255);

for(int a=0;a<=255;a=a+1) {
   digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,a);
    delay(21);
  }
for(int a=255;a>=1;a=a-1) {
   digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    analogWrite(10,a);
    delay(21);
  }
}

void loop() {
   
}



void setup() {
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

digitalWrite(8,HIGH);
digitalWrite(9,LOW);
analogWrite(10,127);
delay(3000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
analogWrite(10,0);
delay(2000);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
analogWrite(10,255);
delay(2000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
analogWrite(10,0);
}

void loop() {
   
}
