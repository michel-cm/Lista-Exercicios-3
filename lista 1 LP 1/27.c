#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numal,num,cont=0;
	srand(time(NULL)); // iniciando o gerador de numeros
	numal = rand()%5;

	do {
		
		printf("numero da sorte:");
		scanf("%d",&num);
		cont++;
	}while(num!=numal);
	printf("aleatorio:%d | seu numero:%d\n",numal,num);
		printf("foram necessarias %d tentativas:\n" ,cont);
	
	return 0;
	

}
