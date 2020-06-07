//Librerias
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Variables Globales
struct tiporeg
{
	int 	matricula;
	char	descrip[50];
	int		mat_aprob;
	float	prom_final;
};

//Main
main(){
	
//Variables locales

	const int N=4;
	tiporeg alumno;
	tiporeg v[N];
	int i;
	float prom;
	char nombre[50];
	int mat,cant;

//Ingreso de datos	

	printf("\t INGRESAR LOS DATOS DE LOS %d ALUMNOS \n",N);
	for(i=0;i<N;i++)
	{
		printf("\n\n************* ALUMNO %d ***************** \n",i+1);
		do
		{
			printf("\nINGRESE MATRICULA: ");
			scanf("%d",&alumno.matricula);
			fflush(stdin);
			if(alumno.matricula<=0)
				printf("\nDATO ERRONEO");	
		}
		while(alumno.matricula<=0);
		printf("\nINGRESE NOMBRE Y APELLIDO: ");
		gets(alumno.descrip);
		fflush(stdin);
		do
		{
			printf("\nINGRESE MATERIAS APROBADAS: ");
			scanf("%d",&alumno.mat_aprob);
			fflush(stdin);
			if(alumno.mat_aprob<0)
				printf("\nDATO ERRONEO");	
		}
		while(alumno.mat_aprob<0);
		do
		{
			printf("\nINGRESE PROMEDIO GENERAL: ");
			scanf("%f",&alumno.prom_final);
			fflush(stdin);
			if((alumno.prom_final<0)||(alumno.prom_final>10))
				printf("\nDATO ERRONEO");	
		}
		while((alumno.prom_final<0)||(alumno.prom_final>10));

//Proceso

		v[i].matricula=alumno.matricula;
		strcpy (v[i].descrip,alumno.descrip); 
		v[i].mat_aprob=alumno.mat_aprob;
		v[i].prom_final=alumno.prom_final;
	}
	printf("\n\n *************************************************");	
	printf("\n *************************************************\n\n");

//Salida de datos

	printf("\t ALUMNOS: \n");
	for(i=0;i<N;i++)
	{
		mat=v[i].matricula;
		strcpy (nombre,v[i].descrip);
		cant=v[i].mat_aprob;
		prom=v[i].prom_final;
		printf(" %2d  %20s %12d %8.2f \n",mat,nombre,cant,prom);
	}
	printf("\n\n*************************************************");	
	printf("\n*************************************************");	
	printf("\n*************************************************\n\n");
	printf("\t ALUMNOS CON PROMEDIO DE 7 O MAS: \n");
	for(i=0;i<N;i++)
	{
		prom=v[i].prom_final;
		if(prom>=7)
		{
			strcpy (nombre,v[i].descrip);
			printf("\n %s ",nombre);
			
		}
	}

//Pausa y fin de programa
	printf("\n\n *************************************************\n\n");
	system("pause");
	return 0;

}
