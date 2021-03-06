#include <stdio.h>
#include <stdlib.h>

int main()
{
	int estatura=0;
	int peso=0;
	float IMC=0;
	printf("ingrese su estatura en cm, seguido de su peso en Kg \n");
	scanf("%d %d", &estatura, &peso); //Lee los datos del teclado acorde al formato especificado
							//el & indica la direccion de la variable
	IMC= peso/((estatura/100.0*estatura/100.0));
	printf("su IMC es: %f \n", IMC);
	
	if(IMC<18.5)
	{
		printf("se encuentra en bajo peso, por favor pida cita de nutricion \n");
	}
	else if(IMC>= 18.6 && IMC<24.9)
	{
		printf("su peso es normal, muy bien \n");
	}
	else if(IMC<29.9)
	{
		printf("se encuentra en sobrepeso, ejercitese y pida cita de nutricion \n");
	}
	else if(IMC>30.0 && IMC<50.0 )
	{
		printf("Tiene obesidad, por favor pida pronto cita con su medico \n");
	}
	else
	{	
		printf("por favor revise los datos ingresados, parecen incorrectos \n");
	}
   	
}
