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

void leer_nro_e(char cade[30],int &n){
	
	printf("\n %s: ",cade);
	fflush(stdin);	
	scanf("%d",&n);

}

//Main
int main(){

//Variables
	
	struct lista *p;
	struct lista *q;

//Ingreso de datos
	
	p= new struct lista;
	leer_nro_e("\nIngrese un valor: ",p->num);
	p->sig= NULL;
	q= new struct lista;
	leer_nro_e("\nIngrese un valor: ",q->num);
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
