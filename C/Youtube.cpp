#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buffer[50]={0};
	char busqueda[100]={0};
		
	printf("ingrese el nombre del video que desea buscar, separe las palabras con un + y no incluya espacios\n");
	scanf("%s", busqueda);
	getchar();
		
	sprintf(buffer, "start https://www.youtube.com/results?search_query=%s", busqueda); 
	system(buffer);
	
	return 0;   	
}
