/*Una temperatura en grados centígrados (Cº) puede ser convertida en a una temperatura en grados Fahrenheit (Fº) de acuerdo a la siguiente fórmula: 
F = ( 9/5 ) C + 32 
Escribir un programa que lea una temperatura en grados Centígrados y obtenga la temperatura Fahrenheit equivalente. */
//Librerias
#include <stdio.h>
#include <stdlib.h>

float fahr(float cel){
	
	float fahr;
	
	fahr=(cel*9/5)+32.0;
	
	return fahr;
	
}

//Main
int main(){
	
//Variables

	float celsius, fahrenheit;

//Ingreso de datos

	printf("Conversor de Celsius a Fahrenheit.\n\n");
	
	printf("Ingrese los grados Celsius: ");
	scanf("%f",&celsius);
	fflush(stdin);

//Salida de datos

	printf("\n\nLa temperatura en Fahrenheit es: %.1f",fahr(celsius));

//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");
	return 0;
		
}
