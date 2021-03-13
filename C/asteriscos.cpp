/*********tabla de multiplicar***********/
/* creado por: Martha Cano  			*/
/* fecha: 13/03/2021        			*/
/* version: 1.0    						*/
/* Este programa imprime un cuarto de rombo*/
/* 										*/
/* 									    */
/****************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	
	for(int i=0;i<15;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
	 	
}
