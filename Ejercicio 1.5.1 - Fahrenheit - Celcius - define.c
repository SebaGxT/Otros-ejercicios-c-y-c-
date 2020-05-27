/*Imprime la tabla farenheit - Celsius*/
//Librerias
#include <stdio.h>

//Constantes
#define LOWER 0 /* límite inferior de la tabla */
#define UPPER 300 /* límite superior */
#define STEP 20 /* tamaño del incremento */

//Main
int main(void)
{

//Variables

    int fahr;
    
//Proceso
    printf("%3s\t%6s\n","Celsius","Fahrenheit");
    for(fahr=LOWER;fahr<=UPPER;fahr=fahr+STEP){
        printf("%3d\t%6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }
//Pausa y fin de programa

  //printf("\n\n\n\n");
  //system("pause");
    return 0;
}
