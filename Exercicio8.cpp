#include <stdio.h>
int main(){
	
	int mat[4][5], lin, col, soma_coluna, soma_total;
	
	soma_total=0;
    	for (col=0;col<5;col++) {
    		soma_coluna=0;
    		for (lin=0;lin<4;lin++) {
        		      printf ("Digite o valor para a linha %i / coluna %i: ",lin,col);
          	      scanf("%i", &mat[lin][col]);
          	      soma_coluna += mat[lin][col];
		}
		printf("A soma da coluna %i e: %i\n\n",col, soma_coluna);
		soma_total += soma_coluna;
	}
   	
	printf("\n\nA soma de todas as colunas e: %i", soma_total);
   	
return(0);
}

