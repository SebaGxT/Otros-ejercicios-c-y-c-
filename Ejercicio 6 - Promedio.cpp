#include <iostream>

using namespace std;

int main(){
	int nota1,nota2,nota3,nota4, promedio = 0;
	
	cout<<"Nota 1: "; cin>>nota1;
	cout<<"Nota 2: "; cin>>nota2;
	cout<<"Nota 3: "; cin>>nota3;
	cout<<"Nota 4: "; cin>>nota4;
	
	promedio = (nota1+nota2+nota3+nota4)/4;
	
	cout<<"\nEl Promedio es: "<<promedio<<endl;
	
	
	return 0;
}
