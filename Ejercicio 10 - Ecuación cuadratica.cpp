#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,b,c, resultadopos= 0, resultadoneg= 0;
	
	cout<<"Digite valor a: "; cin>>a;
	cout<<"Digite valor b: "; cin>>b;
	cout<<"Digite valor c: "; cin>>c;
	
	resultadopos = (-(b)+(sqrt(pow(b,2)-4*a*c)))/(2*a);
	resultadoneg = (-(b)-(sqrt(pow(b,2)-4*a*c)))/(2*a);
	
	cout<<"\nEl resultado 1 es: "<<resultadopos<<endl;
	cout<<"\nEl resultado 2 es: "<<resultadoneg<<endl;
	
	
	return 0;
}
