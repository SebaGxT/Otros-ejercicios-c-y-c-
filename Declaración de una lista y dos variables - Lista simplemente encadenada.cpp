//Librerias
#include <stdio.h>
#include <stdlib.h>

//Listas
struct lista{
	
	int num;
	struct lista *sig;
	
};

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

//Main
int main(){

//Variables
	
	struct lista *p;
	struct lista *q;

//Ingreso de datos
	
	p= new struct lista;
	p->num= 10;
	p->sig= NULL;
	q= new struct lista;
	q->num= 20;
	q->sig= NULL;
	p->sig= q;
	
//Proceso

//Salida de datos
	
	printf("\n %d",p->num);
	printf("\n %d",q->num);

//Pausa y fin de programa

	pausar();
	return 0;

}

