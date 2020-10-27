//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

void captura_cadena(char cade3[],char cade[30],char cade2[30],int n1,int n2){
	
	printf("\n %c%s%c %s",n1,cade,n2,cade2);
	gets(cade3);
	fflush(stdin);
	
}

//Main
int main(){

//Variables

	char x[3];
	
//Ingreso de datos

	captura_cadena(x,"Desea eliminar valores","Si/No:",168,63);
	
//Proceso //Salida de datos
	
	strlwr(x);
	printf("\n\n%s",x);
	strupr(x);
	printf("\n\n%s",x);

//Pausa y fin de programa

	pausar();
	return 0;

}
