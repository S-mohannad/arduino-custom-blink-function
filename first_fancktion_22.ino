void setup() {
pinMode(13,OUTPUT);
Blink(2,300);
 delay(2000);
Blink(5,300);
 delay(1500);
Blink(7,190);
}

void loop() {
}
void Blink(int t, int D){
for(;t>0;t--)
{
digitalWrite(13, HIGH); 
 delay(D);
digitalWrite(13, LOW);
 delay(D);}
}