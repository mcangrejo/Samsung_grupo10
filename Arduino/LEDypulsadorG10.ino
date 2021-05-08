/*Este programa enciende o apaga un LED de acuerdo con la*/
/*posición de un pulsador (presionado o no presionado)*/

int pulsador=0;

void setup() {
  pinMode(2,OUTPUT); //Pin de salida para un LED
  pinMode(3,OUTPUT); //Pin de salida para un LED
  pinMode(4,OUTPUT); //Pin de salida para un LED
  pinMode(5,OUTPUT); //Pin de salida para un LED
  pinMode(8,INPUT); //pin de entrada para el Pulsador

}

void loop() {
    pulsador=digitalRead(8); //lectura de pulsador
    if(pulsador==1)
    {
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      }
}
