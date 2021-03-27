/*********suma de numeros impares********/
/* creado por: Martha Cano  			*/
/* fecha: 27/03/2021        			*/
/* version: 1.0    						*/
/* Suma los numeros impares ingresados	*/
/* si el numero ingresado es cero,   	*/
/* muestra la suma en pantalla y finaliza*/
/****************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int numero=0;
	int suma=0;
	
	do
	{
		scanf("%d", &numero);
		if((numero%2)!=0)
		{
			suma+=numero;
		}
	}while(numero!=0);
	
	printf("la suma es %d", suma);
	
}
