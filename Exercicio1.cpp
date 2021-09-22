#include<stdio.h>

int main()
{
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
		
return(0);	
}
