//Librerias
#include<stdio.h>
#include<stdlib.h>

//Funciones y procedimientos

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
	
  int i, aux, numero, iterar, divisor;
  
  divisor=0;

//Ingreso de datos
	
	leer_nro_e("\nIngrese un valor: ",numero);

//Proceso	
	printf("\nDivisores:\n");
  
	if(numero % 2 == 0){
  	
		iterar = numero / 2;
    
	}else{
  	
		iterar = (numero - 1) / 2;
    
	}

	for (i=1;i<=iterar;i++){
  	
		if(numero % i == 0){
    
			//Guarda el divisor en aux
			aux = numero / i;
      
			//variable que toma para impresion si es distinta a la anterior
			if(aux != divisor){
      	
				divisor = aux;
        
			}

//Salida de datos
	 
			//impresion 
			if( i == iterar){
      	
				printf("%d", divisor);
        
			}else{
      	
				printf("%d,", divisor);
        
    		}
      
    	}
    
  	}

//Pausa y fin de programa
	
	pausar();
	return 0;

}
