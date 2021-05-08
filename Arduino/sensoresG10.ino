/*con una fotocelda se va a controlar la luminosidad de un LED*/
/* se va a sensar un sensor de inclinación y un sensor magnético y los valores valores leídos */
/*se enviarán por el puerto serial*/

#define LED 3
#define SensorD 2
#define SensorA 5
int valorA=0;
int valorD=0;
int luminosidad=0;

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(SensorD,INPUT);
  Serial.begin(9600);
}

void loop() {
  valorA=analogRead(SensorA);
  valorD=digitalRead(SensorD);

  luminosidad=map(valorA,44,840,0,255);
  analogWrite(LED,luminosidad);

  /*if(valorA>450)
  {
    digitalWrite(LED,HIGH);
    }
    else
    {
      digitalWrite(LED,LOW);
    }
*/
  Serial.println(valorA);  
}
