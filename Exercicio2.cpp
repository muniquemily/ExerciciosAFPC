#include<stdio.h>
#include<conio.h>

int main ()
{	
	float altura, peso_i;
	char Sexo;
	
	printf("Para saber seu peso ideal, preencha as informacoes abaixo:\n");
	printf("Altura (m):");
	scanf("%f",&altura);
	printf("Sexo (F/M):");
	fflush(stdin);
	Sexo = getche(); 
		if((Sexo=='F')||(Sexo=='f'))
		{
		peso_i=((400.7*altura)/10);
		}
		
		if((Sexo='M')||(Sexo='m'))
		{			
		peso_i=((450.7*altura)/10);
		}
		printf("\nPeso ideal= %0.3f",peso_i);

getch();
return(0);	
}

