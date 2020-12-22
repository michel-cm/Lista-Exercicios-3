#include <stdlib.h>
#include <math.h>
#include <stdio.h>
 
int main(){

	int n, i, vet[6], lado;

			printf("numero de vezes que o dado foi jogado:");
			scanf("%d", &n);

		for(i = 1; i <= 6; i++)
	{
		vet[i] = 0;	
	}

		for(i = 1; i <= n; i++)
	{
	printf("Digite o lado do dado:");
	scanf("%d", &lado);
	vet[lado]++;
	}

	for(i = 1; i <= n; i++)
{
	if(vet[i] != 0) { printf("Esse lado %d caiu %d vezes. \n", i, vet[i]); }	
} 

			return 0;	
}
