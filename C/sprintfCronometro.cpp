#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buffer[50]={0};
	int tiempo=0;
	
	printf("ingrese el tiempo en el que se pagara la computadora (unidad=segundos) \n");
	scanf("%d", &tiempo);
	sprintf(buffer, "start shutdown -s -t %d", tiempo); 
	system(buffer);
	
	return 0;   	
}
