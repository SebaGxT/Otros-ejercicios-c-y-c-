//Tabla Celsius - Fahrenheit
//Librerias
#include <stdio.h>

//Main
int main(void){
    
//Variables

    float fahr,celsius;
    int lower,upper,step;
    
//Ingreso de datos
    
    lower=0;
    upper=300;
    step=20;
    celsius=lower;

//Proceso
    
    printf("%3s\t%6s\n","Celsius","Fahrenheit");
    while(celsius<=upper){
        
        fahr=(celsius*9.0/5.0)+32.0;
        printf("%3.0f\t%6.1f\n",celsius,fahr);
        celsius=celsius+step;
    }
//Pausa y fin de programa

    printf("\n\n\n\n");
    system("pause");
    return 0;
}




