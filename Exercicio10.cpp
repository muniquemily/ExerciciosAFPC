# include <stdio.h>
# include <conio.h>


float funcao1 (){ 
  float med,n1, n2, n3, n4;
  printf("Para calcular a media, digite o valor das notas (0.0 a 10.0):");
  printf("\nNota 1: ");
  scanf("%f", &n1);
  printf("Nota 2: ");
  scanf("%f", &n2);
  printf("Nota 3: ");
  scanf("%f", &n3);
  printf("Nota 4: ");
  scanf("%f", &n4);
  med = (n1+n2+n3+n4)/4;
  return(med);
}
   
float funcao2 (float med2){ 
   printf("\nMedia=%f", med2);
   if (med2 >= 6.0){
   	printf("\nAprovado");
   }
   else{
   	printf("\nReprovado");
   }
}


int main(void){
  float retorno1;
  char sim_nao;	
  do {
	  retorno1 = funcao1();
	  funcao2(retorno1);
	  printf("\n\nDeseja calcular novamente? ");
	  fflush(stdin);
	  sim_nao = getch();  	
  } while ( (sim_nao=='s') || (sim_nao=='S') ); 
  printf("\n\nFIM");
  
  return (0);
}

