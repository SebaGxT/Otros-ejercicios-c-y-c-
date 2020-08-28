//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funciones y procedimientos

void pausa(){
	
	printf("\n\n\n\n");
	system("pause");

}

void leer_nro(char cade[30], int &a){
	
	printf("\n%s: ",cade);
	fflush(stdin);
	scanf("%d",&a);
	
}

//Main
int main(){

//Variables	

	int x,y;

//Ingreso de datos
	
	leer_nro("\nINGRESE TEXTO AQUI: ",x);
	leer_nro("\nINGRESE TEXTO AQUI: ",y)

//Proceso

//Salida de datos

//Pausa y fin de programa
		
	pausa();
	return 0;
}
