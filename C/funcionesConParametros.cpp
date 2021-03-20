/**************************************************/
/* Calcula el precio final con IVA de un articulo*/
/**************************************************/


#include <stdio.h>
#include <stdlib.h>

float precioconIVA(int base, float impuesto); //declaracion de la funcion. Retorna un flotante, recibe un entero y un flotante

void calculoprecioconIVA(int *precio, float impuesto); //la funcion va a cambiar el valor del precio en lugar de retornarlo 

int main()
{
	int precio=0;
	float impuesto=0.19, precioFinal=0;
	printf("Ingrese el precio base del producto:\n");
	scanf("%d", &precio);
	
	precioFinal=precioconIVA(precio,impuesto); //al pasar precio e impuesto por parametro se pasa el valor NO la variable
	
	printf("El precio inicial es %d \n", precio);
	printf("El precio final es %f \n", precioFinal);  
	
	calculoprecioconIVA(&precio,impuesto); // Para que una funcion pueda modificar una variable del main se debe pasar la direccion
											//de la variable usando &
	
	printf("La variable precio despues de llamar a la funcion calculo precioconIVA en el main es: %d \n", precio);
	
	return 0;
}

float precioconIVA(int base, float impuesto) // definicion de la funcion
{
	return base*(1+impuesto); //retorna directamente la operacion.
}

void calculoprecioconIVA(int *precio, float impuesto) //el * indica que se va a pasar una direccion como parametro
{
	(*precio)=(*precio)*(1+impuesto); //para hacer la operacion se debe usar el valor al cual esta apuntando la direccion de precio.
										//para esto se usa (*precio)
	printf("el valor de precio dentro de la funcion calculoprecioconIVA es: %d \n", *precio);
}

