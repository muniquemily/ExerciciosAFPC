#include <stdio.h>
#include <conio.h>

int main(){
	
	struct registro {
	  int codi, idad;
	  float deve, cred;
	  char nome[100];
	  char ende[100];
	  char nasc[10];
	  char stat[7];
	  char sexo;
			
	}cliente [5];
    int i;
     
	 puts("CADASTRO CLIENTE\n\n");
     for(i=0;i<5;i++){
     
	 printf("\nCadastro cliente %i:",i+1);         
	 puts ("\nCODIGO..............: ");
     scanf("%i", &cliente[i].codi);
     puts ("\nNOME...............: ");
     fflush(stdin);
     gets(cliente[i].nome);
     puts ("\nENDERECO...........: ");
     fflush(stdin);
     gets(cliente[i].ende);
     puts ("\nDATA DE NASCIMENTO.: ");
     fflush(stdin);
     gets(cliente[i].nasc);
     puts ("\nSEXO...............: ");
     fflush(stdin);
     cliente[i].sexo=getche();
     puts ("\nSTATUS.;...........: ");
     fflush(stdin);
     gets(cliente[i].stat);
     puts ("\nVALOR DEVIDO.......: ");
     scanf("%f", &cliente[i].deve);
     puts ("\nVALOR DE CREDITO...: ");
     scanf("%f", &cliente[i].cred);
     puts ("\nIDADE..............: ");
     scanf("%i", &cliente[i].idad);
 	}
 	 
	 puts("\n\n     RELATORIO\n");
	 for(i=0;i<5;i++){
	 
	 printf("\n\nRelatorio cliente %i:",i+1); 
     printf ("\nCODIGO............: %i", cliente[i].codi);
     printf ("\nNOME..............: %s", cliente[i].nome);
     printf ("\nENDERECO..........: %s", cliente[i].ende);
     printf ("\nDATA DE NASCIMENTO: %s", cliente[i].nasc);
     printf ("\nSEXO..............: %c", cliente[i].sexo);
     printf ("\nVALOR DEVIDO......: %0.2f", cliente[i].deve);
     printf ("\nVALOR DE CREDITO..: %0.2f", cliente[i].cred);
     printf ("\nIDADE.............: %i", cliente[i].idad);
     printf ("\nSTATUS............: %s", cliente[i].stat);
	}

return(0);
}

