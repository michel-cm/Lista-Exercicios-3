#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n1,n2,op;
	float soma,sub,div,mult ;
	
	printf("----- Digite 2 valores ----- \n\n");
	while(1){
	printf("Primeiro valor:");
		scanf("%i", &n1);
	printf("\nsegundo valor: ");
		scanf("%i", &n2);
	
	printf ("Escolha um operador aritimético abaixo \n");
	printf ("[1] +\n");
	printf ("[2] -\n");
	printf ("[3] /\n");
	printf ("[4] *\n");
		scanf("%i", &op);
	
	soma = n1 + n2;
	div = n1 / n2;
	sub = n1 - n2;
	mult = n1 * n2;
	
	switch(op){
	
	case 1: 
			printf("\n %i + %i = %.2f\n", n1,n2,soma);
			break;
		case 2: 
			printf(" %i - %i = %.2f\n", n1,n2,sub);
			break;
		
		case 3: 
			printf(" %i / %i = %.2f\n", n1,n2,div);
			break;
				
		case 4: 
			printf(" %i x %i = %.2f\n", n1,n2,mult);
			break;
			
		default:
			printf("Numero invalido\n");
			}
			
		}
	return 0;
}
