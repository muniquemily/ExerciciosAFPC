#include<stdio.h>
#include<conio.h>

int main()
{
	float num, soma=0;
	int cont=1;
	
	while(cont<=20){
		printf("Digite o %i numero:",cont);
		scanf("%f",&num);
		soma=soma+num;
		cont=cont+1;
	}
	
	printf("Total=%f",soma);
	
	getch();
		 	
return(0);
}

