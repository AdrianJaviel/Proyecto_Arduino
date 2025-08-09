int rojo1=13;
int rojo2=9;
int azul1=12;
int azul2=8;
int verde1=11;
int verde2=7;
int pulsador1=2;
int pulsador2=3;
int suma=0;

void setup() 
{
  pinMode(rojo1,OUTPUT);
  pinMode(azul1,OUTPUT);
  pinMode(verde1,OUTPUT);
  pinMode(rojo2,OUTPUT);
  pinMode(azul2,OUTPUT);
  pinMode(verde2,OUTPUT);
  pinMode(pulsador1,INPUT);
  pinMode(pulsador2,INPUT);
  digitalWrite(rojo1,LOW);
  digitalWrite(azul1,LOW);
  digitalWrite(verde1,LOW);
  digitalWrite(rojo2,LOW);
  digitalWrite(azul2,LOW);
  digitalWrite(verde2,LOW);
}

void loop() 
{
  if (digitalRead(pulsador1)==HIGH)
  {
   suma=suma+1;
  }
   delay(1000);
   if (suma==1)
   {
  digitalWrite(rojo1,HIGH);
  delay(1000);
  digitalWrite(rojo1,LOW);
  digitalWrite(azul1,HIGH);
  delay(1000);
  digitalWrite(azul1,LOW);
  digitalWrite(verde1,HIGH);
  delay(1000);
  digitalWrite(verde1,LOW);
  digitalWrite(rojo2,HIGH);
  delay(1000);
  digitalWrite(rojo2,LOW);
  digitalWrite(azul2,HIGH);
  delay(1000);
  digitalWrite(azul2,LOW);
  digitalWrite(verde2,HIGH);
  delay(1000);
  digitalWrite(verde2,LOW);
  delay(1000);
   }
  {
  if (digitalRead(pulsador2)HIGH)
  digitalWrite(rojo1,LOW);
  digitalWrite(azul1,LOW);
  digitalWrite(verde1,LOW);
  digitalWrite(rojo2,LOW);
  digitalWrite(azul2,LOW);
  digitalWrite(verde2,LOW);
  }
}
