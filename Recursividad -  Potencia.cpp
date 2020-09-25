//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

// Calculo del potencial de a la b
// Utiliza una funcion booleana para validar un nro. no negativo

bool positivo_o_nulo(int a){
	
	if(a>=0){
		
		return(true);
		
	}else{
		
		return (false);
		
	}
	
}

int potencial( int a, int b){
	
	int res;

	if(b==0){
		
		res=1;
		
	}else{
		
		res= a * potencial(a, b-1);
		
	}
	
	return(res);
}

void leer_nro (char cade[30],int &a){
	
	printf("\n %s: ",cade);
	fflush(stdin);
	scanf("%d", &a);

}

//Main
int main(){

//Variables
	
	int a, b, pot;

//Ingreso de datos
	
	leer_nro("\n Ingrese un valor para a", a );

	while (positivo_o_nulo(a)!=true){
	
	printf("\n El valor de a debe ser positivo");
	leer_nro("\n Ingrese un valor para a", a );
		
	}
	
	leer_nro("\n Ingrese un valor para b", b );

	while (positivo_o_nulo(b)!=true){
	
	printf("\n El valor de b debe ser positivo");
	leer_nro("\n Ingrese un valor para b", b );
	
	}
	
//Proceso
	
	pot=potencial(a,b);
	
//Salida de datos
		
	printf("\n El potencial de %d elevado a la %d es %d.", a,b, pot);

	//otra forma de llamar a la funcion
	printf("\n El potencial de %d elevado a la %d es %d.", a,b, potencial(a,b));

//Pausa y fin de programa

	pausar();
	return 0;

}






