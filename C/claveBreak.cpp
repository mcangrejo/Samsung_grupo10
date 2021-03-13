/*********Clave**************************/
/* creado por: Martha Cano  			*/
/* fecha: 13/03/2021        			*/
/* version: 1.0             			*/
/*										*/
/* Este programa recibe una 			*/
/* contrasena y luego la persona		*/
/* tiene tres intentos para ingresar	*/
/* el programa debe finalizar si la     */
/* cantidad de contrasenas incorrectas  */
/* es mayor a 3   						*/
/****************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int clave[4]={};
	int claveingresada[4]={};
	int intentos=1;
		
	printf("Ingrese la contrasena que desea almacenar, separe cada digito con un enter \n");
	
	for(int i=0; i<=3; i++)  //Estructura de un for. El operador aritmetico ++ suma 1 a la variable
	{
		scanf("%d", &clave[i]);	
	}
	
	//printf("la clave es: %d %d %d %d",clave[0], clave[1], clave[2], clave[3]);
	system("cls") ;//esta funcion borra la pantalla
	

	while(intentos<=3)
	{
		printf("Ingrese la contrasena correcta, separe cada digito con un enter \n");
		for(int i=0; i<=3; i++)  //Estructura de un for. El operador aritmetico ++ suma 1 a la variable
		{
			scanf("%d", &claveingresada[i]);	
		}
		//printf("la clave ingresada es: %d %d %d %d",claveingresada[0], claveingresada[1], claveingresada[2], claveingresada[3]);
		if((clave[0]==claveingresada[0])&&(clave[1]==claveingresada[1])&&(clave[2]==claveingresada[2])&&(clave[3]==claveingresada[3]))
		{	
			printf("contrasena correcta\n");
			break;   //rompe el bucle que lo contiene. Si esta contenido dentro de dos blucles anindados solo rompe el bucle mas interno
		}
		else
		{
			printf("contrasena incorrecta \n");
		}
		intentos++;
		
	}
	
	return 0;	
	
}
