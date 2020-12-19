#ifndef _Lib_io_seba_
#define _Lib_io_seba_

void pausar();
bool par_impar(int n);
int Ent_pos_neg_neu(int n);
int promedio_r(int n,int cant);
float promedio(float n,int cant);
bool multiplo(int n,int m);
bool edad(int ed);
void cargalado(int &l);
int tipotriang(int la1, int la2, int la3);
int calcularmenoroigual(int equi,int esca,int isos);
void coordenadas(int &coor);
int detectarcuadrante(int x,int y);
float fahr(float cel);
void carga_vec_e(int vec[], int tamanio);
void carga_vec_f(float vec[], int tamanio);
void ordenvec(int v[],int tamanio);
void sumadevaloresvec(int v1[],int v2[], int vres[], int tamanio);
bool buscanro_vec(int vec[],int cant,int n);
int mayor_a_val(int vec[],int tamanio,int n);
void leer_nro_ep(char cade[30],int &n);
void leer_nro_e(int &n);
void leer_nropos_ep(char cade[30],int &n);
void leer_nropos_e(int &n);
void leer_nro_fp(char cade[30],float &n);
void leer_nro_f(float &n);
void leer_nropos_fp(char cade[30],float &n);
void leer_nropos_f(float &n);
int suma_func(int n1, int n2);
int sumacumulativa(int n);
int suma_acum_rec(int n);
int producto_suce_func(int n1, int n2);
int divis_func(int n1, int n2);
int may_func(int n1, int n2);
float potencia(float n1, float n2);
int divisores(int n);
double factoriales(int n);
int factorial(int n);
int fibonacci_func(int n);
void suma_proced(int n1, int n2, int &res);
void producto_suce_proced(int n1, int n2, int &res);
void divis_proced(int n1, int n2, int &res);
void men_proced(int n1, int n2,int &res);
void leer_let(char &let);
void leer_cadena(char cade[]);
char contar_caract(char cade[]);
char let_igual(char cade[],char let);
bool let_ini(char cade[],char let);
bool let_fin(char cade[],char let);
bool comparar_cadenas(char cade1[],char cade2[]);
void imprimir_cadena(char cade[]);

#include "Lib_io_seba.cpp"
#endif
