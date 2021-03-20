#include <stdio.h>
#include <stdlib.h>

void unafuncionlarga();  //declaracion de la funcion una funcionlarga (prototipo). Se debe terminar con ;

void miprimerafuncion()  //definicion y declaracion de una funcion que no recibe parametros y no retorna algo
{
	printf("se acaba de ejecutar miprimerafuncion \n");
}

int main()
{
	miprimerafuncion(); //una funcion se puede llamar las veces que se necesite
	miprimerafuncion();
	miprimerafuncion();
	unafuncionlarga();   //para llamar una funcion definida despues del main, se debe declarar antes del main 
	return 0;
}

//definicion de la funcion unafuncionlarga
void unafuncionlarga()
{
	printf("Si una funcion es muy larga lo mejor es escribirla debajo del main \n");
}
