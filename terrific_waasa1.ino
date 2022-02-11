// C++ code
// ! + (variante) = se for falso, se for verdadeirto nõa precisa do !


int var1;
int var2;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  	var1 = digitalRead(2);
   	var2 = digitalRead(3);
  
   if(var1){
     digitalWrite(4,HIGH);
   }
   if(!var2){
     digitalWrite(4,LOW);
   }
}
