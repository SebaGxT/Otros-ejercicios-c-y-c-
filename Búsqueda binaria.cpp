//Búsqueda Binaria
//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Main
int main(void){
	
//Variables
	
	srand(time(NULL));
	
	int const N=100;
	int i,j,aux,vec[N],inf,sup,mitad,dato,rangoinf,rangosup;
	bool flag=false;

//Ingreso de datos	
	
	printf("b%csqueda binaria\n\n",163);
	printf("Establezca los rangos de b%csqueda con valores enteros por favor.\n\n",163);
	printf("Ingrese el valor inferior: ");
	scanf("%d",&rangoinf);
	fflush(stdin);
	
	do{
		
		printf("Ingrese el valor superior: ");
		scanf("%d",&rangosup);
		fflush(stdin);
		
		if(rangosup<rangoinf){
			
			printf("\n\nValor incorrecto, el rango superior no puede ser menor al inferior.\n\n");
			
		}
		
	}while(rangosup<rangoinf);
	
		printf("\nIngrese el valor a buscar entre los rangos fijados: ");
		scanf("%d",&dato);
		fflush(stdin);

	for(i=0;i<N;i++){
		
		vec[i]=rand()%(rangoinf+rangosup);
		
	}
	
//Proceso
	
	for(i=0;i<N;i++){
		
		for(j=0;j<N;j++){

			//Ordena de menor a mayor
			if(vec[j]>vec[j+1]){
				
				aux=vec[j];
				vec[j]=vec[j+1];
				vec[j+1]=aux;
				
			}
			
		}
		
	}
	
	//Búsqueda Binaria
	inf=0;
	sup=N;
	
	while(inf<=sup){
		
		mitad=(inf+sup)/2;
		
		if(vec[mitad]==dato){
			
			flag=true;
			break;
			
		}
		
		if(vec[mitad]>dato){
			
			sup=mitad;
			mitad=(inf+sup)/2;
			
			if(mitad==sup && mitad!=dato){
				
				break;
				
			}
			
		}
		
		if(vec[mitad]<dato){
			
			inf=mitad;
			mitad=(inf+sup)/2;
			
			if(mitad==inf && mitad!=dato){
				
				break;
				
			}
			
		}
		
	}
	
//Salida de datos

	//Imprime vector
	for(i=0;i<N;i++){
		
		printf("%d \n",vec[i]);
		
	}
	
	if(flag){
		
		printf("\n\nSe encontro el valor: %d",dato);
		
	}else{
		
		printf("\n\nNo se encontro el valor\n\n");
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
