#include<stdio.h>
#include<conio.h>

int main ()
{
	int opcao;
	
	printf("Menu:\n1-Exercicio 1\n2-Exercicio 2\n3-Exercicio 3\n4-FIM\n\nDigite o numero da opcao desejada:");
	scanf("%i",&opcao);
	
	switch(opcao){
		case 1:{
			printf("Exercicio 1:\n");
			float Z,L,A,C;
			printf("Para:Z=L+A*2.3/C");
			printf("\nDigite o valor de L:");
			scanf("%f",&L);
			printf("Digite o valor de A:");
			scanf("%f",&A);
			printf("Digite o valor de C:");
			scanf("%f",&C);
			Z=((L+(A*2.3))/C);
			printf("Z=%f",Z);
		break;
		}
		case 2:{
			printf("Exercicio 2:\n");
			float altura, peso_i;
			char Sexo;
			printf("Para saber seu peso ideal, preencha as informacoes abaixo:\n");
			printf("Altura (m):");
			scanf("%f",&altura);
			printf("Sexo (F/M):");
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
		break;
		}
		case 3:{
			printf("Exercicio 3:\n");
			float num, soma=0;
			int cont=1;
			while(cont<=20){
			printf("Digite o %i numero:",cont);
			scanf("%f",&num);
			soma=soma+num;
			cont=cont+1;
			}
			printf("Total=%f",soma);
			break;
		}
		case 4:{
			printf("\nFIM");
			break;
		}
		default:{
			printf("Opcao invalida");
			break;
		}
	}
return(0);
}
