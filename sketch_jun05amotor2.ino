#define in1 13
#define in2 12
#define en1 11
#define en2 10
#define in3 9
#define in4 8
void setup() {
for(int a=8; a<=13; a++){
  pinMode(a,OUTPUT);
  digitalWrite(a,LOW); 
}
}

void loop() {

for(int x=0; x<=255; x++)
{
  analogWrite(en1,x);
  analogWrite(en2,x); 
  delay(50);
 
}
digitalWrite(in2,HIGH);
digitalWrite(in4,HIGH);
}
