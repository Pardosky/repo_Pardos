int rele = 2;
char M = 0;
void setup(){
Serial.begin(9600);
pinMode(rele,OUTPUT);
 digitalWrite(rele,LOW);
}

void loop() {
  if(Serial.available()>0){
M = Serial.read();
  }
switch(M)
{
  case 'A':
  digitalWrite(rele,LOW);
  break;
  case 'E':
  digitalWrite(rele,HIGH);
  break;
}
}
