// VALIDADOR DE FECHAS
//Librerias
#include<stdio.h>
#include<stdlib.h>

//Main
int main(void){

//Variables
	
	int mm,dd,aa;
	bool valid=false;
	
//Ingreso de datos

	printf("DIA: ");
	scanf("%d",&dd);
	fflush(stdin);
	printf("MES: ");
	scanf("%d",&mm);
	fflush(stdin);	
	printf("A%cO: ",164);
	scanf("%d",&aa);
	fflush(stdin);
	
//Proceso

	switch(mm)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			{
				if((dd>=1)&&(dd<=31)){
				
					valid=true;
				
					} 
						}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			{
			
				if((dd>=1)&&(dd<=30)){
				
					valid=true;
				
					}
			
						}
			break;
		case 2:
			{
				if((dd>=1)&&(dd<=28)){
					
					valid=true;
					
				}else if((dd==29)&&(aa%4==0)&&((aa%100!=0)||(aa%400==0))){
					
					valid=true;
					
					}
						}
				break;
	}

//Salida de datos

	if(valid){
		
		printf("\nFECHA V%cLIDA",181);
		
	}else{
		
		printf("\nFECHA INV%cLIDA",181);
		
	}
		
//Pausa y fin de programa
	
	printf("\n\n\n\n");
	system("pause");	
	return 0;
	
}
