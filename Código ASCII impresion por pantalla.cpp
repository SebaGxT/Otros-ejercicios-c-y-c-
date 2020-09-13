//Código ASCII impresion por pantalla
//Liberias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Funciones

int confirmacion(){
	
	char conf;
	bool valid=true;
		
	do{
			
			printf("\n\n%cDesea continuar%c S/N: ",168,63);
			scanf(" %c",&conf);
			fflush(stdin);
			
			if(conf=='S'||conf=='s'||conf=='N'||conf=='n'){
				
				valid=false;
				
			}else{
				
				printf("\n\nDebe ingresar S para continuar o N para cancelar.\n\n");
				
			}	
			
		}while(valid);	
	
	return conf;
		
}

void abcdario(int ini, int fin){

//Salida de datos
	
	int i;

	if(ini<fin){
		
		for(i=ini;i<=fin;i++){
		
			printf("%c = %d\n",i,i);
		
		}
		
		printf("\n\n");
		
	}else{
		
		for(i=ini;i>=fin;i--){
		
			printf("%c = %d\n",i,i);
		
		}
		
		printf("\n\n");
		
	}
	
}

//Main
int main(){
	
//Variables
	
	char conf;
	int inicial,final;

//Ingreso de datos
	
	printf("C%cdigo ASCII\n\n",162);
	
	//Mensaje
	printf("Ingrese valores en el rango ASCII para imprimir por pantalla 0 a 255\n\n");

	do{
		
		//Carga de valores
		do{
		
			printf("\nIngrese valor inicial: ");
			scanf(" %d",&inicial);
			fflush(stdin);
		
			if(inicial<0||inicial>255){
				
				printf("\n\nEl valor ingresado es incorrecto, debe ingresar un valor entre el 0 y el 255\n\n");
				
			}
		
		}while(inicial<0||inicial>255);
		
		do{
		
			printf("\nIngrese valor final: ");
			scanf(" %d",&final);
			fflush(stdin);
		
			if(final<0||final>255){
				
				printf("\n\nEl valor ingresado es incorrecto, debe ingresar un valor entre el 0 y el 255\n\n");
				
			}
		
		}while(final<0||final>255);
		
//Proceso
		
		printf("\n\n");
			
		abcdario(inicial,final);
			
		conf=confirmacion();
		
		if(conf=='N'||conf=='n'){
			
			printf("\n\n**********Se finaliza el programa**********");
			
		}
		
	}while(conf=='S'||conf=='s');
	
//Pausa y fin de programa

	printf("\n\n\n\n");
	system("pause");
	return 0;
	
}
