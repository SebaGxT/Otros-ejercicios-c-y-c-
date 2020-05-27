// imprime la tabla Fahrenheit-Celsius para fahr = 0, 20, ..., 300; versión de punto flotante
//Librerias
#include <stdio.h>

//Main
int main(void)
{

//Variables

    float fahr,celsius;
    int lower,upper,step;
    
//Ingreso de datos

    lower=0;
    upper=300;
    step=20;
    
//Proceso

    fahr=lower;
    printf("%3s\t%2s\n","Fahrenheit","Celsius");
    while(fahr<=upper){
        
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%4.0f\t%14.1f\n",fahr,celsius);
        fahr=fahr+step;
    }
   
//Pausa y fin de programa

   printf("\n\n\n\n");
   system("pause");
   return 0;
}
