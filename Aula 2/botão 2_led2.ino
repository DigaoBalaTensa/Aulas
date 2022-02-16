// C++ code
//

int var1;
int var2;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  	var1 = digitalRead(2);
   	var2 = digitalRead(3);
  
   if(var1){
     digitalWrite(4,HIGH);
   }else {digitalWrite(4,LOW);
         }
     
   if(!var2){
     digitalWrite(5,HIGH);
   }   else { 
     digitalWrite (5,LOW);
         }
}
