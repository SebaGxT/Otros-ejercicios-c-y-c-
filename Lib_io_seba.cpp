#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Lib_io_seba.h"

//Auxiliares y otros
void pausar(){
	
	printf("\n\n\n\n");
	system("pause");
	
}

//Auxiliares con numeros
bool par_impar(int n){
	
	if(n%2==0){
		
		return true;
		
	}else{
		
		return false;
		
	}
	
}

int Ent_pos_neg_neu(int n){
	
	int tipo;
	
	if(n>0){
		
		tipo=1;
		
	}else if(n<0){
		
		tipo=2;
		
	}else{
		
		tipo=0;
		
	}
	
	return tipo;
	
}

//Promedio
int promedio_r(int n,int cant){
	
	int prom;
	
	prom=n/cant;
	
	return prom;
	
}

float promedio(float n,int cant){
	
	float prom;
	
	prom=n/cant;
	
	return prom;
	
}

//Número multiplo
bool multiplo(int n,int m){
	
	
	if(n%m==0){
		
		return true;
		
	}else{
		
		return false;
		
	}
	
	
}

//Validador mayor de edad
bool edad(int ed){
	
	if(ed>=18){
		
		return true;
		
	}else{
		
		return false;
		
	}
	
}

//Triangulos
void cargalado(int &l){
	
	printf("\nIngrese el valor del lado: ");
	scanf("%d",&l);
	fflush(stdin);	
	
}

int tipotriang(int la1, int la2, int la3){
	
	if(la1==la2&&la1==la3){
		
		//Equilatero
		return 1;
		
	}else if(la1!=la2&&la1!=la3&&la2!=la3){
		
		//Escaleno
		return 2;
		
	}else{
		
		//Isosceles
		return 3;
		
	}
	
}

int calcularmenoroigual(int equi,int esca,int isos){
	
	int tri;
	
	if(equi!=esca&&equi!=isos&&esca!=isos){
		
		if(equi<esca&equi<isos){
			
			//equilatero
			tri=1;
		
		}else if(esca<isos){
			
			//escaleno
			tri=2;
		
		}else if(isos<esca){
		
			//isosceles
			tri=3;
		
		}
		
	}
	
	return tri;
	
}

//Cuadrantes, coordenadas
void coordenadas(int &coor){

	printf("\nIngrese la coordenada: ");
	scanf("%d",&coor);
	fflush(stdin);

}

int detectarcuadrante(int x,int y){
	
	int cuad;
	
	if(x==0&&y==0){
		
		cuad=0;
		
	}else if(x<0&&y>0){
		
		cuad=1;
		
	}else if(x>0&&y>0){
		
		cuad=2;
		
	}else if(x<0&&y<0){
		
		cuad=3;
		
	}else{
		
		cuad=4;
		
	}
	
	return cuad;
	
}

//Conversión Celsius - Fahrenheit
float fahr(float cel){
	
	float fahr;
	
	fahr=(cel*9/5)+32.0;
	
	return fahr;
	
}

//vector

void carga_vec_e(int vec[], int tamanio){
	
	int i;
	
	for(i=0;i<tamanio;i++){
		
		printf("\nIngrese el valor %d: ",i+1);
		scanf("%d",&vec[i]);
		fflush(stdin);
		
	}
	
}

void carga_vec_f(float vec[], int tamanio){
	
	int i;
	
	for(i=0;i<tamanio;i++){
		
		printf("\nIngrese el valor %d: ",i+1);
		scanf("%f",&vec[i]);
		fflush(stdin);
		
	}
	
}

void ordenvec(int v[],int tamanio){
	
	int i,cant1,cant2;
	bool order1=false,order2=false;
	
	cant1=0;
	cant2=0;
	
	for(i=0;i<tamanio;i++){
		
		if(v[i]<v[i+1]){
			
			cant1++;
			
		}
		
		if(v[i]>v[i+1]){
			
			cant2++;
			
		}
		
	}
	
	if(cant1+1==tamanio){
		
		order1=true;
		
	}else if(cant2+1==tamanio){
		
		order2=true;
		
	}
	
	if(order1){
		
		printf("\n\nEl vector esta ordenado de menor a mayor.\n\n");	
		
	}else if(order2){
		
		printf("\n\nEl vector esta ordenado de mayor a menor.\n\n");
		
	}else{
		
		printf("\n\nEl vector no esta ordenado.\n\n");
		
	}
	
}

void sumadevaloresvec(int v1[],int v2[], int vres[], int tamanio){
	
	int i;
	
	for(i=0;i<tamanio;i++){
		
		vres[i]=v1[i]+v2[i];
		
	}
	
}

bool buscanro_vec(int vec[],int cant,int n){
	
	bool valid=false;
	int i=0;
	                                        
    while(i<cant&&valid==false){
    	
    	if(n==vec[i]){
		
			valid=true;
				
		}
		
		i++;
    	
	}
	
	return valid;
	
}

int mayor_a_val(int vec[],int tamanio,int n){
	
	int i, cont;
	cont=0;
	
	for(i=0;i<tamanio;i++){
		
		if(vec[i]>=n){
			
			cont++;
			
		}
		
	}
	
	return cont;
	
}

//Ingreso de datos - Numeros

//Lectura de entero mensaje personalizado
void leer_nro_ep(char cade[30],int &n){
	
	printf("%s",cade);	
	scanf("%d",&n);
	fflush(stdin);

}

//Lectura de entero
void leer_nro_e(int &n){
	
	printf("\nIngrese un valor entero: ");
	scanf("%d",&n);
	fflush(stdin);
	
}

//Lectura de entero positivo mensaje personalizado
void leer_nropos_ep(char cade[30],int &n){	
	
	do{
		
		printf("%s");
		scanf("%d",&n);
		fflush(stdin);
		
		if(n<0){
			
			printf("\n\nPor favor ingrese un valor positivo.\n\n");
			
		}
		
	}while(n<0);
					
}

//Lectura de entero positivo
void leer_nropos_e(int &n){	
	
	do{
		
		printf("\nIngrese un valor entero positivo: ");
		scanf("%d",&n);
		fflush(stdin);
		
		if(n<0){
			
			printf("\n\nPor favor ingrese un valor positivo.\n\n");
			
		}
		
	}while(n<0);
					
}

//Lectura de float mensaje personalizado
void leer_nro_fp(char cade[30],float &n){
	
	printf("%s",cade);
	scanf("%f",&n);
	fflush(stdin);
	

}

//Lectura de float
void leer_nro_f(float &n){
	
	printf("\nIngrese un valor float: ");
	scanf("%f",&n);
	fflush(stdin);
	
}

//Lectura de float positivo mensaje personalizado
void leer_nropos_fp(char cade[30],float &n){	
	
	do{
		
		printf("%s");
		scanf("%f",&n);
		fflush(stdin);
		
		if(n<0){
			
			printf("\n\nPor favor ingrese un valor positivo.\n\n");
			
		}
		
	}while(n<0);
					
}

//Lectura de float positivo
void leer_nropos_f(float &n){	
	
	do{
		
		printf("\nIngrese un valor float positivo: ");
		scanf("%f",&n);
		fflush(stdin);
		
		if(n<0){
			
			printf("\n\nPor favor ingrese un valor positivo.\n\n");
			
		}
		
	}while(n<0);
					
}

//Operaciones con numeros

//Funciones
int suma_func(int n1, int n2){
	
	int res;
	
	res=n1+n2;
	
	return res;
	
}

//Suma acumulativa
int sumacumulativa(int n){
	
	int i,cont;
	
	cont=0;
	
	for(i=1;i<=n;i++){
		
		cont+=i;
		
	}
	
	return cont;
	
}

//Suma acumulativa Recursiva
int suma_acum_rec(int n){
	
	int res;
	
	res=0;
	
	if(n==1){
		
		res=1;
		
	}else{
		
		res=n+suma_acum_rec(n-1);
		
	}
	
	return res;
	
}

//Multiplicación suma sucesivas
int producto_suce_func(int n1, int n2){
	
	int i,res;
	
	res=0;
	
	for(i=1;i<=abs(n2);i++){
		
		res+=n1;
		
	}
	
	if(n2<0){
		
		res=res*(-1);
		
	}
	
	return res;
	
}

//División resta sucesivas
int divis_func(int n1, int n2){
	
	int cont,res;
	
	cont=0;
	res=abs(n1);
	
	while(res>=abs(n2)){
			
		res=res-abs(n2);
		cont++;
				
	}
	
	if((n1<0)&&(n2>0)||(n1>0)&&(n2<0)){
		
		cont=cont*(-1);
		
	}
	
	return cont;
	
}

//Mayor de dos numeros
int may_func(int n1, int n2){
		
	int may;
	
	if(n1>n2){
		
		may=n1;
		
	}else{
		
		may=n2;
		
	}
	
	return may;
	
}

//Potencia
float potencia(float n1, float n2){
	
	int i;
	
	float x;
	
	x=n1;
	
	for(i=1;i<abs(n2);i++){
		
		x=x*n1;
		
	}
	
	if(n2<0){
		
		x=1/x;
		
	}
	
	
	return x;
	
}

//Divisores
int divisores(int n){
	
	int i,cont,x,y;
	
	cont=1;
	y=abs(n);

		
	if(y%2==0){
			
		x=y/2;
			
	}else{
			
		x=(y-1)/2;
		
	}
		
	for(i=1;i<=x;i++){
			
		if(y%i==0){
				
			cont++;
				
		}
			
	}
				
	return cont;
		
}

//Factorial
double factoriales(int n){
	
	int i; 
	double fact;
	
	fact=1;
	
	for(i=1;i<=abs(n);i++){
		
		fact=fact*i;
		
	}
	
	return fact;
	
}

int factorial(int n){
	
	int res;
	
	if(n==0){
		
		res=1;
		
	}else{
		
		res=n*factorial(n-1);
		
	}
	
	return res;
	
}

//Fibonacci
int fibonacci_func(int n){

	int res;
	
	if(n<2){
		
		res=n;
		
	}else{
		
		res=fibonacci_func(n-1)+fibonacci_func(n-2);
		
	}
	
	return res;
	
}

//Procedimientos

void suma_proced(int n1, int n2, int &res){
	
	res=n1+n2;
		
}

//Multiplicación suma sucesivas
void producto_suce_proced(int n1, int n2, int &res){
	
	int i;
	
	res=0;
	
	for(i=1;i<=abs(n2);i++){
		
		res+=n1;
		
	}
	
	if(n2<0){
		
		res=res*(-1);
		
	}
	
}

//División resta sucesivas
void divis_proced(int n1, int n2, int &res){
	
	int cont;
	
	cont=0;
	res=abs(n1);
	
	while(res>=abs(n2)){
			
		res=res-abs(n2);
		cont++;
				
	}
	
	if((n1<0)&&(n2>0)||(n1>0)&&(n2<0)){
		
		cont=cont*(-1);
		
	}
	
	res=cont;
		
}

//Menor de dos numeros
void men_proced(int n1, int n2,int &res){
		
	if(n1<n2){
		
		res=n1;
		
	}else{
		
		res=n2;
		
	}
	
}

//Ingreso de dato - Letras y Cadenas de caracteres
void leer_let(char &let){
	
	printf("\nIngrese caracter: ");
	scanf("%c",&let);
	fflush(stdin);
	
}

void leer_let_p(char cad[30],char &let){
	
	printf("%s");
	scanf("%c",&let);
	fflush(stdin);
	
}

void leer_cadena(char cade[]){
	
	printf("\nIngrese cadena: ");
	gets(cade);
	fflush(stdin);
	
}

//Operaciones con letras y cadenas

//Funciones

//Cuenta cantidad de caracteres
char contar_caract(char cade[]){
	
	int i,cont;
	
	i=0;
	cont=0;
	
	while(cade[i]!='\0'){
		
		if(cade[i]!='\0'){
			
			cont++;
			i++;
			
		}
		
	}
	
	return cont;
	
}

//Indica cantidad de veces que se encuentra la letra dada por parametro
char let_igual(char cade[],char let){
	
	int i,cont;

	cont=0;
	
	for(i=0;i<strlen(cade);i++){
		
		if(cade[i]==let){
			
			cont++;
			
		}
		
	}
	
	return cont;
	
}

//Compara letra inicial
bool let_ini(char cade[],char let){
	
	int cmp;
	
	if(cade[0]==let){
		
		return true;
		
	}else{
		
		return false;
		
	}
	
}


//Compara letra final
bool let_fin(char cade[],char let){
	
	int cmp,leng;
	
	leng=strlen(cade)-1;
	
	if(cade[leng]==let){
		
		return true;
		
	}else{
		
		return false;
		
	}
	
}

bool comparar_cadenas(char cade1[],char cade2[]){
	
	int cmp;
	
	cmp=strcmp(cade1,cade2);
	
	if(cmp==0){
		
		return true;
		
	}else{
		
		return false;
		
	}
	
}

//Procedimientos
void imprimir_cadena(char cade[]){
	
	int i;
	
	for(i=0;i<strlen(cade);i++){
		
		printf("%c",cade[i]);
		
		if(i==strlen(cade)-1){
			
			printf("\n");
			
		}
		
	}
	
}

