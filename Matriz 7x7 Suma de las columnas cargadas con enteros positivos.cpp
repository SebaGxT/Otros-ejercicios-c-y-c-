//Cargar en un vector V de dimensión 7 la suma de las columna de una matriz de 7x7, previamente cargada con enteros positivos. 
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Main
int main(void){
	
//Variables
	
	const int FIL=2,COL=2;
	int f,c,vec[FIL],mat[FIL][COL];

//Ingreso de datos	
	
	printf("Carga de matriz con enteros positivos.\n\n");
	printf("Se mostrara la suma de cada columna.\n");
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			do{
				
				printf("\nIngrese un valor fila %d columna %d: ",f+1,c+1);
				scanf("%d",&mat[f][c]);
				fflush(stdin);
				
				if(mat[f][c]<0){
					
					printf("\n\nIngrese un valor positivo por favor.\n\n");
					
				}
				
			}while(mat[f][c]<0);
			
		}
		
	}
	
//Proceso

	for(c=0;c<COL;c++){
		
		//Establece vector en 0 para acumular
		vec[c]=0;
		
	}
	
	for(f=0;f<FIL;f++){
		
		for(c=0;c<COL;c++){
			
			vec[c]+=mat[f][c];
	
		}

		
	}
	
//Salida de datos

	printf("\n");
	
	//Número de columna
	for(c=0;c<COL;c++){
		
		printf("\t  Columna %d",c+1);
		
	}
	
	for(f=0;f<FIL;f++){
		
		printf("\nFila %d:\t",f+1);
		
		for(c=0;c<COL;c++){
				
			printf("%8d\t",mat[f][c]);
			
		}
		
		printf("\n");
		
	}
	
	//Mensaje de salida
	printf("\n\nLa suma de cada columna es: \n\n");
	
	//Resultado de suma de cada fila
	for(c=0;c<COL;c++){
		
		printf("Columna %d es: %d\n",c+1,vec[c]);
		
	}
	
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
