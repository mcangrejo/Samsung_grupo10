/*********tabla de multiplicar***********/
/* creado por: Martha Cano  			*/
/* fecha: 13/03/2021        			*/
/* version: 1.0    						*/
/* Este programa guarda en un arreglo	*/
/* multidimensional, las tablas de mul	*/
/* tiplicar del 0 al 9 y las imprime    */
/****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int tabla[10][10]={};
	int fila=0;
	int columna=0;
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			tabla[i][j]=i*j;
		}
	}

	printf("ingrese los indices de la tabla de multiplicar, separelos con un enter\n");
	scanf("%d %d", &fila, &columna);
	printf("la multiplicacion de %d por %d es %d", fila, columna, tabla[fila][columna]); 	
}
