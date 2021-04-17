/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

/*Este programa enciende y apaga un LED cada segundo*/

// la función setup corre una sola vez cuando se presiona el reset o cuando se alimenta la tarjeta 
void setup() {
  // inicializa el hardware de acuerdo a lo que se requiera.
  pinMode(8, OUTPUT); //pinMode configura un pin digital como entrada o como salida.
                      // en este caso se está configurando el pin 8 como salida
}

// La función loop corre en bucle una y otra vez por siempre 
void loop() {
  digitalWrite(8, HIGH);   // digitalWirte escribe un alto(5V) o un bajo(0V) en un pin
                           // en este caso está escribiendo un alto (HIGH) en el pin 8 
  delay(1000);                       // la función delay hace una espera. En este caso de 1000 ms. es decir un segundo
  digitalWrite(8, LOW);    // escribe en el pin 8 un bajo (LOW)
  delay(1000);                       // espera un segundo
}
