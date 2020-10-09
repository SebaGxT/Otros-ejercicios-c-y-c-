//Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Lista
struct lista{
	
	int num;
	struct lista *sig;
	
};

//Funciones y Procedimientos

void pausar(){

	printf("\n\n\n\n");
	system("pause");

}

void armar_lista(struct lista *&com){
	
	struct lista *p;
	struct lista *ant;
	int n;
	
	printf("\nIngrese el primer n?mero de la lista: ");
	scanf("%d",&n);
	fflush(stdin);
	
	if(n==0){
		
		com=NULL;
		
	}else{
		
		com=new struct lista;
		com->num=n;
		com->sig=NULL;
		ant=com;
		
		printf("\nIngrese otro n?mero de la lista: ");
		scanf("%d",&n);
		fflush(stdin);
	
		while(n!=0){
		
			p=new struct lista;
			p->num=n;
			p->sig=NULL;
			ant->sig=p;
			ant=p;
	
			printf("\nIngrese otro n?mero de la lista: ");
			scanf("%d",&n);
			fflush(stdin);
		}
	}
}

void mostrar_lista(struct lista *com){
	
	struct lista *p;
	
	p=com;
	
	while(p!=NULL){
		
		printf("\n %d", p->num); 
		p = p->sig;
		  
    } 
	  
}

void cambio(struct lista *com){
	
	struct lista *p;
	int aux;
	
	p=com;
	
	if(p!=NULL){
		
		p = p->sig;
		  
		if (p!=NULL){
			
			aux=p->num;
			p->num = com->num; 
			com->num = aux;
			          
        }
         
    } 
	  
}

int cuantos(struct lista *com, int n){
	
	struct lista *p;
	int res;
	
	p=com; 
	res=0;
	
	while(p!=NULL){
		
		if(n==p->num){
			
			res++;
			
		} 
          
    	p=p->sig;
		  
    }
	 
   return res;
   
}

int suma_lista(struct lista *com){
	
	struct lista *p;
	int res;
	
	p=com; 
	res=0;
	
   while(p!=NULL){
   	
		res=res+p->num;
		p=p->sig;
		  
    }
	  
   return res;
   
}

bool esta(struct lista *com, int n){ 

	struct lista *p;
	bool res;
	
	p=com; 
	res=false;
   
	while(p!=NULL){
   	
		if(n==p->num){
       	
			res=true;
       	
	   } 
		
		p=p->sig; 
		 
    }  
     
   return res;
   
}

bool otroesta(struct lista *com, int n){
	
	struct lista *p;
	bool res;
	
	p=com; 
	res=false;
	
	while(p!=NULL&&res==false){
		
		if(n == p->num){
			
			res=true;
			
		} 
		
		p = p->sig;  
    } 
	  
   return res;
   
}

//Main
int main(){

//Variables
	
	int i,x,nro;
	struct lista *comienzo;
	
//Ingreso de datos

	armar_lista(comienzo);
	mostrar_lista(comienzo);
	
	printf("\nIngrese otro n?mero de la lista: ");
	scanf("%d",&nro);
	fflush(stdin);
	
//Proceso

	if(esta(comienzo, nro)==true){
 	
		printf("\n Esta el  %d en la lista", nro);
	
	}else{
	
		printf("\n NO Esta el  %d en la lista", nro);
	
	}

	if(otroesta(comienzo, nro)==true){
		
		printf("\n Esta el  %d en la lista", nro);
		
	}else{
		
		printf("\n NO Esta el  %d en la lista", nro);
		
	}
		
	x=cuantos(comienzo, nro);

//Salida de datos
	
	printf("\n Hay %d en la lista", x);
	
	x=suma_lista(comienzo);
 
	printf("\n La suma de la lista es  %d", x); 
 
	cambio(comienzo);
	mostrar_lista(comienzo);
	
//Pausa y fin de programa

	pausar();
	return 0;

}
