#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	int numeros[100], n, i, imp=0;
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);

		geraVetor(numeros,n);
	
	mostraVetor(numeros,n);

	for(i=0;i<n;i++){
		if(numeros[i] % 2 == 1){
			imp++;
		}
				
	
	}
		printf ("o total de impares foi: %d", imp);
return 0;
}
