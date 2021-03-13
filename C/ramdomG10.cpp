/*********Random**************************/
/* creado por: Martha Cano  			*/
/* fecha: 13/03/2021        			*/
/* version: 1.0             			*/
/*										*/
/****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int numero;

	srand(time(NULL)); //Se asigna una semilla aleatoria para la funcion rand
	for(int i=0; i<=10; i++)
	{
		numero= rand() %11;  //se divide el numero aleatorio entre 11 y se toma la parte entera. Asi se obtiene numero aleatorio entre 0 y 10
		numero+=20;   //se suma 20 para tener un numero aletorio entre 20 y 30
		printf("%d\n", numero); //rand calcula numeros aleatorios. Toma una semilla (numero inical) y le aplica una formula 
	}
	return 0;	
}
