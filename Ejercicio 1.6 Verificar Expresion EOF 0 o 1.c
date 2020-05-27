/* copia la entrada a la salida; la.1° versión 
//Librerias
#include <stdio.h>

//Main
int main(void)
{

//Variables

  int c;
    
//Proceso
   
   printf("Para finalizar el programa se debe presionar CTRL+D o CTRL+Z dependiendo el sistema\n");
   c=getchar();
   while(c!=EOF){
       
       putchar(c);
       c=getchar();
   }
   printf("EOF == %d\n", EOF);
   
//Pausa y fin de programa

  //printf("\n\n\n\n");
  //system("pause");
    return 0;
}
*/

/* copia la entrada a la salida; la.2° versión*/ 
//Librerias
#include <stdio.h>

//Main
int main(void)
{

//Variables

  int c;
    
//Proceso
   
  printf("Para finalizar el programa se debe presionar CTRL+D o CTRL+Z dependiendo el sistema\n");
   while((c=getchar())!=EOF){
       
       putchar(c);
       
   }
   printf("EOF == %d\n", EOF);
//Pausa y fin de programa

  //printf("\n\n\n\n");
  //system("pause");
    return 0;
}