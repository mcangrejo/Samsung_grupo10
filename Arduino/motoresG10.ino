//programa para manejo de motores
#define MotorDC 11
#define Servomotor 10
int dato=0;

void setup() {
  //para manejar un motor DC, se puede manejar con digitalWrite o con analogWrite para variara la velocidad
  pinMode(MotorDC,OUTPUT);
  pinMode(Servomotor,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if(Serial.available())
  {
    dato=Serial.read();
    Serial.println(dato);
  }
  if(dato== '1')
  {
    digitalWrite(MotorDC,LOW);// el motor DC se apaga
  }
  else if(dato== '2')
  {
    digitalWrite(MotorDC,HIGH); //el motor DC se prende
  }
}
