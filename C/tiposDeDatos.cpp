#include <stdio.h>
#include <stdlib.h>

int main()
{
	short int beepersInt = -10; //int 4bytes o short int 2 bytes el especificador %d
	float tercio= 10/3.0; // float 4 bytes, permite representar numeros con parte decimal
						 // las operaciones se deben hacer con uno de los valores con punto decimal
						 //el especificador %f	
	char caracter= 'a';  //char 1 byte y se interpreta segun la tabla ASCII. Sin embargo
						//en memoria sigue siendo un numero de 0 a 255.
						//El especificador es %c
	bool condicion= false; //bool 1 byte. Los posibles valores son 0 o 1. Que el compilador
						//tambien entiende como false y true. Cualquier valor diferente a 0
						//se interpreta como un true	
	
	unsigned int beepersUint =-25; //unsigned int los representa como valores positivos
	 
   printf("el valor de beepersInt es: %d \n El valor de beepersUint es: %d \n",beepersInt,beepersUint);
   printf("el valor de beepersInt en hexadecimal es: %x, en octal es %o \n", beepersInt, beepersInt);
   printf("10 divido 3 es igual a: %f \n", tercio);
   printf("el contenido de la variable caracter es: %c \n el equivalente en decimal es: %d \n", caracter, caracter);
   
   
   for(int i=0;i<=3;i++)
   {
	   if(condicion==false)
	   {
	   		printf("El valor de condicion es false\n");
	   		printf("el valor almacenado en condicion %d \n", condicion);
	   		condicion ++;
	   }
		else if(condicion == true)
		{
			printf("El valor de condicion es true\n ");
	   		printf("el valor almacenado en condicion %d \n", condicion);
	   		condicion ++;
		}	
		
	}
   
   	
}
