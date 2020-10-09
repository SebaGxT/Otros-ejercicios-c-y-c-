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

void insertar_nodo(struct lista *&com, int n){
	
	struct lista *nuevo;
	struct lista *p;
	struct lista *ant;
	bool flag;
	
	nuevo = new struct lista;
	nuevo->num = n;
	nuevo->sig = NULL;
   
	p=com;
	ant=p;
   
	// busco donde poner el nuevo nodo
	flag=false;
	
	while(p!=NULL && flag==false){
		
		if(p->num>n){
			
			flag=true;
			
		}else{
			
			ant=p;
            p=p->sig;
            
        }
    }
    
   // en que caso estoy;  //no habia nodos  
   if(com==NULL){
   	
		com = nuevo;
   	
   }else{
   	
   		// va en el primer lugar
		if(p==com){
			
			nuevo->sig=com;
            com=nuevo;
        // en el medio y en el ultimo    
        }else{
			
			nuevo->sig=p;
            ant->sig=nuevo;
        }
    
    }
    
}

void eliminar_nodo(struct lista *&com, int n){
	
	struct lista *p;
	struct lista *ant;
	bool flag;
  
   
	p=com;
	ant=p;
	// busco donde esta el primer nodo
	flag=false;
	
	while(p!=NULL && flag==false){
		
		if(p->num==n){
			
			flag=true;
			
		}else{
			
			ant=p;
            p=p->sig;
            
        }
    }
    
	// en que caso estoy; //no habia nodos  
	if(com==NULL){
		
		printf("\nLista sin nodos.");
		
	}else{
		
		// lo encontre
		if(flag==true){  
		
			// esta en el primer lugar, uno o mas nodos.
			if(p==com){ 
				
				com=com->sig;
                delete(p);
                
            // en el medio y en el ultimo
            }else{
				
				ant->sig=p->sig;
                delete(p);
                
            }
        }else{
        	
        	printf("\nNo está en la lista.");
				
		}
            
    }
}

//Main
int main(){

//Variables
	
	int i,x,nro;
	struct lista *comienzo;
	
//Ingreso de datos
	
	armar_lista(comienzo);
	mostrar_lista(comienzo);
	
	printf("\nIngrese un número para insertar en la lista: ");
	scanf("%d",&nro);
	fflush(stdin);
	
//Proceso //Salida de datos
	
	insertar_nodo(comienzo,nro);
	mostrar_lista(comienzo);
	
	printf("\nIngrese un número para eliminar en la lista: ");
	scanf("%d",&nro);
	fflush(stdin);
	
	eliminar_nodo(comienzo,nro);
	mostrar_lista(comienzo);
	
//Pausa y fin de programa

	pausar();
	return 0;

}
