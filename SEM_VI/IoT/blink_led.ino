 int LED1 = 4;
 int LED2 = 3;
  
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial.begin(9600); 
}

void loop() {

 //00
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(1000);
  Serial.println("00 DONE");
 


  //01
  digitalWrite(LED1, LOW);
  delay(1000);
  digitalWrite(LED2, HIGH);
  delay(1000);
  Serial.println("01 DONE");

  // 10
  digitalWrite(LED1, HIGH);
  delay(1000);
  digitalWrite(LED2, LOW);
  delay(1000);
  Serial.println("10 DONE");

  //11
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000);
  Serial.println("11 DONE");
  
}
