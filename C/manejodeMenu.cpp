/**************************************************/
/* Como manejar un menu por consola				  */
/**************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcionUsuario=1;
	int radio=0;
	float perimetro=0;
	float area=0;
	while(opcionUsuario!=4)
	{
		printf("seleccione \n 1:Para ingresar un valor de radio \n 2: Para calcular perimetro \n 3: para calcular area \n 4: para salir \n");
		scanf("%d", &opcionUsuario);
		
		switch(opcionUsuario)  //inicio de la etsrctura switch/case que se usa para ejecutar acciones segun el valor que tenga opcionUsuario
		{
			case 1:
				printf("ingrese el radio \n");
				scanf("%d", &radio);
			break;
			
			case 2:
				perimetro= 2*3.14*radio; 
				printf("el prerimetro es: %f \n", perimetro);
			break;
			
			case 3:
				area=3.14*radio*radio;
				printf("El area es: %f \n ", area);
			break;
		}
	}
	return 0;
}
