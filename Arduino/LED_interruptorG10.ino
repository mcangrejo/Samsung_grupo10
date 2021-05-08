/*Este programa enciende o apaga un LED de acuerdo con las*/
/*veces que se ha presionado un pulsador*/

int pulsador_anterior=0;
int pulsador=0;
int count=0;
int impar=0;
int tiempo=0;

void setup() {
  pinMode(2,OUTPUT); //Pin de salida para un LED
  pinMode(3,OUTPUT); //Pin de salida para un LED
  pinMode(8,INPUT); //pin de entrada para el Pulsador
  Serial.begin(9600); //se configura la velocidad del puerto serial a 9600 baudios
}

void loop() {
    tiempo=millis();  //ej. 5000 ms
    while((millis()-tiempo)<5000)
    {
        pulsador_anterior=pulsador;
        delay(100);
        pulsador=digitalRead(8);
        if((pulsador_anterior==0)&&(pulsador==1))
        {
          count++;
          Serial.println(count); //se envía por la comunicación serial el valor de count. El cual se puede visualizar en el pc
        }
     }
     for(int i=1; i<=count; i++)
      {
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        delay(500);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        delay(500);
      }
   
  }

 /*
      impar=count%2;
      if(impar==1)
      {     
          digitalWrite(8,HIGH);
      }
      else
      {
          digitalWrite(8,LOW);
      }*/
