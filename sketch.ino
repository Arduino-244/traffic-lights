/*
FAROL 1:
5 -     Verde
6 -     Vermelho
7 -     Amarelo
FAROL 2:
13 -    Verde
12 -    Vermelho
11 -    Amarelo
*/
int time = 3000;
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop()
{
  //RESET
  digitalWrite(11, LOW);
  digitalWrite(6, LOW);
  //VERDE 1 - VERMELHO 2
  digitalWrite(5, HIGH);
  digitalWrite(12, HIGH);
  delay(time);
  //AMARELO1 - VERMELHO 2
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  delay(time);
  //VERMELHO 1 - VERDE 2
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  delay(time);
  //AMARELO 2 - VERMELHO 1
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  delay(time);
}