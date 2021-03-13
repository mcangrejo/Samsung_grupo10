#include <stdio.h>
#include <stdlib.h>

int main()
{
	char html[50]={0};
	
	FILE *f=fopen("sic.html","w");  //crea la variable f de tipo FILE y se le asigna la apertua de un archivo
									// "r" abre un archivo en modo lectura "r+" abre un archivo en lectura/escritura
									//"w" crea un archivo de en escritura, borra el archivo anterior con el mismo nombre
									//"a" crea un archivo de escritura, si ya existia agrega el contenido sin borar el anterior.
	
	fprintf(f,"Hola esta es mi página web de Samsung Innovation campus \n" ); //Imprime en el archivo apuntado por f.
	
	scanf("%[^\n]", html); //se toma del teclado una cadena de caracteres
	
	fprintf(f,"<html>");    //inicia estructura html
	fprintf(f,"<marquee direction=UP>"); //inicia marquilla marquee con parametro direccion=UP
	fprintf(f, "%s", html); //se imprime lo capturado por el teclado en el archivo apuntador por f
	fprintf(f,"</marquee>"); //cierra marquilla marquee
	fprintf(f,"</html>");   //cierra estructura html
	
	
	fclose(f); //cierra el archivo que tengo asociado a la variable f
	
	system("sic.html"); // se abre el archivo html recien creado
	return 0;
}
