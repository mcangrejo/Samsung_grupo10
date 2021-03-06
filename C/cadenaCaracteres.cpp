#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c='H';
	char c1='o';
	char c2='l';
	char c3='a';
	char nombre[50]={0}; //se crea una cadena de caracteres con un tamano fijo y se llena de 0 o '\0' o NULL
						//para poder capaturar del teclado cadenas de caracteres
	char saludo[5]="Hola"; //creamos una cadena de caracteres. Se asigna un espacio adicional para el NULL
							//que indica el fin de la cadena
	printf("%s \n", saludo); //el especificador %s se usa para string(cadenas de caracteres)
							//este especificador imprime todas las letras hasta que encuentre un /0 o NULL
	char curso[]={"Samsung Innovation Campus"};
	printf("%s \n", curso);
	curso[7]='\0';
	printf("%s \n", curso);
	printf("%c y %c \n", saludo[3], curso[1]); //el %c se usa para un solo caracter e imprime solo el cracter 
									//que se especifica en el argumento
	// printf("%s \n", saludo[0]); Esto no se debe hacer, bloquea al compilador. Espera una cadena de caracteres pero se le envia por parametro un solo caracter								
									
	if(saludo[3]==curso[1])
	{
		printf("Si puedo comparar letras dentro de mis cadenas de caracteres \n");	
	}
	
	printf("ingresa tu nombre:\n");
	scanf("%s", nombre);  //para cadenas de caracteres no se usa el & de direccion, porque el nombre de la cadena
						//ya es la direccion
	printf("Hola %s", nombre)
	return 0;   	
}
