

char clk = 5;
char latch = 4;
char sd = 7;


byte data = B11111111;

void setup() {
  pinMode(clk,OUTPUT);
  pinMode(latch,OUTPUT);
  pinMode(sd,OUTPUT);
  digitalWrite(clk,LOW);
  digitalWrite(latch,LOW);
}

void loop() {
  for( char k=0; k < 8; k++){
  if ((data >> k) & B00000001 ){
  digitalWrite(sd,HIGH);
  digitalWrite(clk,HIGH);
  digitalWrite(clk,LOW);
 }
 else {
  digitalWrite(sd,LOW);
  digitalWrite(clk,HIGH);
  digitalWrite(clk,LOW);
 }
  }
 digitalWrite(latch,HIGH);
 digitalWrite(latch,LOW);

}
