//Ordenar vector Version 2
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main
int main(void){
	
//Variables
	
	srand(time(NULL));
	
	int const N=10;
	int i,j,aux,vec[N];

//Ingreso de datos	
	
	for(i=0;i<N;i++){
		
		vec[i]=rand()%1000;
		
	}
	
//Proceso
	
	for(i=0;i<N;i++){
		
		for(j=0;j<N;j++){
			
			//Ordena de mayor a menor
		/*	if(vec[i]>vec[j]){
				
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
				
			} */
			
			//Ordena de menor a mayor
			if(vec[i]<vec[j]){
				
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
				
			}
			
		}
		
	}
	
//Salida de datos

	for(i=0;i<N;i++){
		
		printf("%d \n",vec[i]);
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
