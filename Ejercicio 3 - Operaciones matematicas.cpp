#include <iostream>

using namespace std;

int main(){
	float n1, n2, multiplicacion = 0;
	cout<<"Digite el precio: ";cin>>n1;
	cout<<"Porcentaje de iva: ";cin>>n2;
	
	
	multiplicacion = n1 * n2;
	
	cout<<"\nEl precio mas iva es:"<<multiplicacion<<endl;
	
	
	return 0;
}
