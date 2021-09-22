#include<stdio.h>
#include<conio.h>

int main()
{
	float base, altura, area;
	char cont='s';
	
	while (cont=='s')
	{
	printf("\n\nPara calcular a area do triangulo, preencha as informacoes abaixo:\nBase do triangulo:", cont);
	scanf("%f", &base);
	printf("Altura do triangulo:");
	scanf("%f", &altura);
	area=(base*altura)/2;
	printf("Area=%f", area);
	printf("\nDeseja calcular novamente?(s/n)):");
	cont=getche();
	}
	
	if (cont!='s'){
		printf("\nFIM");	
	}
	
	return(0);
}
