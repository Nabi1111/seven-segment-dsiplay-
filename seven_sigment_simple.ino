int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;
int dp = 11;
int i;
void setup() 
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(dp,OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
for(i=0;i<= 10;i++)
{
  switch(i)
  {
   case 0:
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
   digitalWrite(dp,HIGH);
   Serial.println("0");
   delay(1000);
   break;

   case 1:
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW);
   digitalWrite(dp,HIGH);
   Serial.println("1");
   delay(1000);
   break;

   case 2:
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("2");
   delay(1000);
   break;

   case 3:
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("3");
   delay(1000);
   break;

   case 4:
   digitalWrite(a,LOW);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("4");
   delay(1000);
   break;

   case 5:
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("5");
   delay(1000);
   break;

   case 6:
   digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("6");
   delay(1000);
   break;

   case 7:
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,LOW);
   digitalWrite(g,LOW
   );
   digitalWrite(dp,HIGH);
   Serial.println("7");
   delay(1000);
   break;

   case 8:
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("8");
   delay(1000);
   break;

   case 9:
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,HIGH);
   digitalWrite(d,HIGH);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("9");
   delay(1000);
   break;

    case 10:
   digitalWrite(a,HIGH);
   digitalWrite(b,HIGH);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
   digitalWrite(dp,HIGH);
   Serial.println("p");
   delay(1000);
   break;
   
  }
}
}
