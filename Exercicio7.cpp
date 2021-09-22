#include<stdio.h>

int main()
{
	int i,vet[10],menor,maior,posicao1, posicao2;
	
	for(i=0;i<=9;i++){
		printf("Digite um valor maior que zero:");
		scanf("%i",&vet[i]);
	}
		
	menor=vet[0];
	maior=vet[0];
	posicao1=0;
	posicao2=0;
		
	for(i=1;i<=9;i++){
		if(vet[i]<menor){
		menor=vet[i];
		posicao1=i;
		}
		
		if(vet[i]>maior){
		maior=vet[i];
		posicao2=i;
		}		
	}
	
	printf("\nO menor valor e %i e esta na posicao %i",menor, posicao1);
	printf("\nO maior valor e %i e esta na posicao %i",maior, posicao2);
		
return(0);	
}
