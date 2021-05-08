/* Este programa enciende y apaga un LED progresivamente*/
int potenciometro=0;
int brillo=0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  potenciometro=analogRead(A0); //se obtiene un valor entre 0 y 1023
                              //donde 0 corresponde a 0 v y 1023 a 5V
  //brillo=potenciometro/4;
  brillo=map(potenciometro,0,1023,0,255); //Esta función mapea un rango de entrada a un rango de salida 
  analogWrite(3,brillo);
  analogWrite(5,brillo);  
  Serial.println(potenciometro);
   
}

/*
 * for(int brillo=0; brillo<=255; brillo++)
  {
    analogWrite(3,brillo);// 
    analogWrite(5,brillo);
    delay(10);
  } 
  for(int brillo=255; brillo>=0; brillo--)
  {
    analogWrite(3,brillo);//
    analogWrite(5,brillo);
    delay(10);
  }
 *  */      
