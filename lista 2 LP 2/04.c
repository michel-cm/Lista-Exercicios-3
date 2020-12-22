#include <stdio.h>
#include "bibliotecaVetor.h"

int main(){
	int numeros[100], n, i,m, par=0;
	printf("Quantos elementos no vetor:");
	scanf("%d",&n);

		geraVetor(numeros,n);
		mostraVetor(numeros,n);

	for(i=0;i<n;i++){
		if(numeros[i] % 2 == 0)
			par++;
		}//fimfor
		
		
		printf ("o total de pares foi: %d", par);
return 0;
}
