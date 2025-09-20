// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s)Ligado
  digitalWrite(9, LOW);
  delay(1000); // Aguarde 1000 millisecond(s)Desligado

  pinMode(8, OUTPUT);
  digitalWrite(8, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s)Ligado
  digitalWrite(8, LOW);
  delay(1000); // Aguarde 1000 millisecond(s)Desligado

  pinMode(10, OUTPUT);
  digitalWrite(10, HIGH);
  delay(1000); //Aguarde 1000 millisecond(s)Ligado
  digitalWrite(10, LOW);
  delay(1000); // Aguarde 1000 millisecond(s)Desligado

  pinMode(11, OUTPUT);
  digitalWrite(11, HIGH);
  delay(1000); //Aguarde 1000 millisecond(s)Ligado
  digitalWrite(11, LOW);
  delay(1000); // Aguarde 1000 millisecond(s)Desligado
  
  pinMode(12, OUTPUT);
  digitalWrite(12, HIGH);
  delay(1000); //Aguarde 1000 millisecond(s)Ligado
  digitalWrite(12, LOW);
  delay(1000); // Aguarde 1000 millisecond(s)Desligado
}