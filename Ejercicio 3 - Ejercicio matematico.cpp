//3. Escribe la siguiente expresión matemática como expresión en c++

#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"Digite el valor a: "; cin>>a;
	cout<<"Digite el valor b: "; cin>>b;
	cout<<"Digite el valor c: "; cin>>c;
	cout<<"Digite el valor d: "; cin>>d;
	cout<<"Digite el valor e: "; cin>>e;
	cout<<"Digite el valor f: "; cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	
	cout.precision(2);
	
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
