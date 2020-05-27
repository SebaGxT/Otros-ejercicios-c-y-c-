/* Escriba un fragmento de programa que intercambie los valores de dos variable.

x = 10;
y= 5;

x = 5;
y = 10;

*/

#include <iostream>

using namespace std;

int main(){
	int x,y,aux;//aux viene de auxiliar
	
	cout<<"Digite el valor x: "; cin>>x;
	cout<<"Digite el valor y: "; cin>>y;
	
	/*
	x = 10
	y = 5
	
	aux = 10; aux pasa a tener el valor de x
	x = 5; x pasa a tener el valor de y
	y = aux; y pasa a tenr el valor de aux 
	
	por lo tanto 
	
	x = 5
	y = 10
	
	*/
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"\nEl nuevo valor de x es: "<<x<<endl;
	cout<<"El nuevo valor de y es: "<<y<<endl;
	
	return 0;
}
