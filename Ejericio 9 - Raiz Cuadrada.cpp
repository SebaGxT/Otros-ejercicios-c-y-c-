/* 9. Realice un programa que calcule el valor que toma la siguiente función para 
unos valores dados de x e y: */

#include <iostream>
#include <math.h> //libreria de c++ de matematica y trigonometria

using namespace std;

int main(){
	float x, y, resultado = 0;
	
	cout<<"Digite el valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1); /* sqrt raiz cuadrada ; 
										pow elevado a la potencia primero se pone la variable y 
										con coma se pone a cuanto se quiere elevar*/

	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	return 0;
}
