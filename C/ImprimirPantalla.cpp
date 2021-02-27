#include <stdio.h>  //instrucciones de pre-procesamiento
#include <stdlib.h>

int main()
{	
	//Para facilitar la lectura del codigo, se dejan tabulaciones y saltos de lineas entre cada instruccion
 	
	printf("Introduccion al lenguaje C \n"); //printf imprime en pantalla lo que se pase por argumento 
	printf("Impresion en pantalla \a \n"); //\n introduce un salto de linea al final de la impresion 
											//\a reproduce el sonido de alerta de windows
	
	// \t realiza tabulaciones horizontales. Es util para imprimir en columna
	printf(" A \t B \t A AND B \n 0 \t 0 \t 0 \n 0 \t 1 \t 0 \n 1 \t 0 \t 0 \n 1 \t 1 \t 1 \n");
	
	// \b realiza un retroceso de espacio
	printf("hola mundo!\b* \n");
	
	// \\  \' \"
	printf("Ella dijo:\"Hola mundo\"\n"); //Para imprimir una " se debe agregar \ antes de la "
	printf("Para imprimir una \" se debe agregar \\ antes de la \" \n");
	printf("Para imprimir un \\ se debe agregar \\ antes del \\ \n \n"); //se agrega /n por cada salto de linea deseado
	
	puts("puts imprime en pantalla e incluye el salto de linea");
	puts("pero \"puts\" no acepta variables");
	
	return 0;   

}
