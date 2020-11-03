//Librerias
#include <stdio.h>
#include <stdlib.h>

//Arbol
struct arbol{
	
	int num;
	struct arbol *der;
	struct arbol *izq;
		
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

void crear_arbol(struct arbol *&ra){
	
	ra=NULL;
	
}

bool buscanro_arbol(struct arbol *&ra, int n){
	
	struct arbol *punt;
	bool valid;
	
	valid=false;
	punt=ra;
	
	while(punt!=NULL&&valid==false){
		
		if(punt->num==n){
			
			valid=true;
			
		}else{
			
			if(punt->num>n){
				
				punt=punt->izq;
				
			}else{
				
				punt=punt->der;
				
			}
			
		}
		
	}
	
	return valid;
	
}

void insert_arbol(struct arbol *&ra,int n){
	
	struct arbol *punt,*ant,*nue;
	
	nue=new struct arbol;
	nue->num=n;
	nue->der=NULL;
	nue->izq=NULL;
	
	if(ra!=NULL){
		
		punt=ra;
		ant=ra;
		
		while(punt!=NULL){
			
			ant=punt;
			
			if(punt->num>n){
				
				punt=punt->izq;
				
			}else{
				
				punt=punt->der;
				
			}
			
		}
		
		if(ant->num>n){
			
			ant->izq=nue;
			
		}else{
			
			ant->der=nue;
			
		}
		
	}else{
		
		ra=nue;
		
	}
	
}

void imp_arbol_rec_IRD(struct arbol *ra){
	
	if(ra!=NULL){
		
		//IRD
		imp_arbol_rec_IRD(ra->izq);
		printf("\n%d",ra->num);
		imp_arbol_rec_IRD(ra->der);
		
	}
	
}

void imp_arbol_rec_IDR(struct arbol *ra){
	
	if(ra!=NULL){
		
		//IDR
		imp_arbol_rec_IDR(ra->izq);
		imp_arbol_rec_IDR(ra->der);
		printf("\n%d",ra->num);
		
	}
	
}

void imp_arbol_rec_RID(struct arbol *ra){
	
	if(ra!=NULL){
		
		//RID
		printf("\n%d",ra->num);
		imp_arbol_rec_RID(ra->izq);
		imp_arbol_rec_RID(ra->der);
		
	}
	
}

void imp_arbol_rec_RDI(struct arbol *ra){
	
	if(ra!=NULL){
		
		//RDI
		printf("\n%d",ra->num);
		imp_arbol_rec_RDI(ra->der);
		imp_arbol_rec_RDI(ra->izq);
		
	}
	
}

void imp_arbol_rec_DIR(struct arbol *ra){
	
	if(ra!=NULL){
		
		//DIR
		imp_arbol_rec_DIR(ra->der);
		imp_arbol_rec_DIR(ra->izq);
		printf("\n%d",ra->num);
		
	}
	
}

void imp_arbol_rec_DRI(struct arbol *ra){
	
	if(ra!=NULL){
		
		//DRI
		imp_arbol_rec_DRI(ra->der);
		printf("\n%d",ra->num);
		imp_arbol_rec_DRI(ra->izq);
		
	}
	
}

//Main
int main(){

//Variables
	
	struct arbol *ar;
	int n;
	
	crear_arbol(ar);
	
//Ingreso de datos
	
	printf("Ingreso de valores al arbol, finaliza con 0.\n\n");
	
	leer_nro_e("\nIngrese un valor: ",n);
	
	if(n!=0){
		
		while(n!=0){
			
			if(!buscanro_arbol(ar,n)){
			
				insert_arbol(ar,n);
			
			}else{
			
				printf("\n\nEl n%cmero ingresado esta en el Arbol\n\n",163);
			
			}
			
			leer_nro_e("\nIngrese un valor: ",n);
				
		}
	
//Proceso //Salida de datos
		
		printf("\n\n");
		imp_arbol_rec_IRD(ar);
		printf("\n\n");
		imp_arbol_rec_IDR(ar);
		printf("\n\n");
		imp_arbol_rec_RID(ar);
		printf("\n\n");
		imp_arbol_rec_RDI(ar);
		printf("\n\n");
		imp_arbol_rec_DIR(ar);
		printf("\n\n");
		imp_arbol_rec_DRI(ar);
		printf("\n\n");
		
	}else{
		
		printf("\n\nArbol vacio finaliza el programa.\n\n");
		
	}
	
//Pausa y fin de programa

	pausar();
	return 0;

}
