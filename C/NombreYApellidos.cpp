#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nombre[50]={0};
	char apellido[50];
	int edad=0;
	
	printf("nombres:");
	scanf("%[^\n]", nombre);
	getchar();

	printf("apellidos:");
	scanf("%[^\n]", apellido);
	getchar();

	printf("Hola %s %s", nombre, apellido);
	
	return 0;   	
}
