void setup()
{
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
 
}

void loop()
{
  digitalWrite(8, HIGH);
  delay(300); 
  digitalWrite(8, LOW);
  delay(300); 
  digitalWrite(7, HIGH);
  delay(600); 
  digitalWrite(7, LOW);
  delay(600); 
}
