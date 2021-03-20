#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *hobbies=fopen("pasatiemp.txt","r"); //se abre en modo de solo lectura
	
	if(hobbies==NULL) // Manejo de error al abrir el archivo. fopen devuelve NULL si no encuetra en archivo
	{
		printf("Archivo no encontrado"); //informa que el archivo no fue encontrado
		return -1; //termina el programa retornando -1 para indicar un error en la ejecucion
	}
	
	char titulos[3][50]={};  //Arreglo de caracteres de dos dimensiones para almacenar los titulos de las columnas
	char nombre[10][50]={};  //Arrgelo de caracteres de dos dimensiones para almacenar los nombres
	int edad[10]={};        // Arreglo de enteros de una dimension para guardar las edades
	char hobby[10][50]={};  //Arreglo de caracteres de dos dimensiones para almacenar los hobbies
	char edadLetras[10]={};  //Arreglo de caracteres de una dimenSion para guardaR temporalmente la edad extraida en caracteres 
							//antes de convertirla a entero	
	int i=0;
	
	fscanf(hobbies, "%s %s %s", titulos[1], titulos[2], titulos[3]); //extraccion de los titulos
	
	
	while(1) //bucle infinito
	{
		fscanf(hobbies, "%s %s %s", nombre[i], edadLetras, hobby[i]); //extraccion de la informacion de una linea (un registro completo)
		
		edad[i]=atoi(edadLetras); //conversion de la edad en caracteres a un entero y alamcenarlos en el arreglo de edades
		printf("%s \t %d \t %s \t \n", nombre[i], edad[i], hobby[i]);
		i++; //se aumenta el indice para que guarde correctamente
		if(feof(hobbies)) break; //evalua si el ultimo scanf llego a un fin de archivo (e:end o:of f:file) y rompe el while(1)
	}
	
	if(fclose(hobbies)==0)  //se llama la funcion de cierre de archivo y se pregunta por el valor de retorno. Si es cero se cerr[o correctamente
	{
		printf("archivo cerrado correctamente \n");
		return 0;
	}
	else
	{
		printf("no se pudo cerrar el archivo \n");
		return -1;   //es una forma de indicar que se est[a terinando el programa con error
	}
	
	return 0;
}
