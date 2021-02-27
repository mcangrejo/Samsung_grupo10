//instrucciones de pre-procesamiento
#include <stdlib.h>  //para incluir librer[ias. 
					//El compilador trae el codigo de estas librerias 
					// y lo incluye en mi ejecutable.


int main()    //todo codigo en c, debe contener una funcion princial: main
{         //C me exige usar corchetes para los bloques de codigo
	
	//c me exige terminar todas las instrucciones con ;
	system("start http://www.samsung.com");// llamado a la instruccion System
										//que pertenece a la libreria stdlib
										//y le paso como argumento una directriz de
										//windows			
	
	system("start \magnify\ c:\\Wyndows\\System32\\Magnify.exe");
	
	system("pause"); //directriz para que la ventana de consola permanezca abierta
	
	return 0; //  c me exige cerrar las funciones con un retorno 
			// en este caso y por convencion el main retorna un 0
}
