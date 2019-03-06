#define relay A0
#define interval 1000

void setup() {
  pinMode(relay,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(relay,HIGH);
  delay(interval);
  digitalWrite(relay,LOW);
  delay(interval);
  
  // put your main code here, to run repeatedly:

}
