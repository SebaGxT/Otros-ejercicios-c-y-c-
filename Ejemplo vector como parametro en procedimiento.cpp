//Librerias
#include <stdio.h>
#include <stdlib.h>

//Funcion de carga
void cargarvecdecimal(float vecdec[],int tamaniovec){
	
	//Recorrido de vector
	int i;
	
	for(i=0;i<tamaniovec;i++){
	
		printf("\nIngrese el valor decimal %d: ",i+1);
		scanf("%f",&vecdec[i]);
		fflush(stdin);	
		
	}
		
}

void cargarvecentero(int vecen[],int tamaniovec){
	
	//Recorrido de vector
	int i;
	
	for(i=0;i<tamaniovec;i++){
	
		printf("\nIngrese el valor entero %d: ",i+1);
		scanf("%d",&vecen[i]);
		fflush(stdin);	
		
	}
		
}

//Main
int main(){

//Variables	
	const int TAMANIO=5;
	int i,vecentero[TAMANIO];
	float vecdecimal[TAMANIO];

//Poner en cero los vectores	
	for(i=0;i<TAMANIO;i++){
		
		vecentero[i]=0;
		vecdecimal[i]=0.0;
		
	}
	
//Llamada a funcion
	
	cargarvecentero(vecentero,TAMANIO);
	cargarvecdecimal(vecdecimal,TAMANIO);

//Impresion por pantalla para verificación	
	
	for(i=0;i<TAMANIO;i++){
		
		printf("\n%d",vecentero[i]);
		
	}
	
	for(i=0;i<TAMANIO;i++){
		
		printf("\n%.2f",vecdecimal[i]);
		
	}

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
