#include <stdio.h>
#include "bibliotecaVetor.h"



int main(){
	int a[100],b[100],c[100], n,i;
	printf("Quantos elementos tera nos vetores:");
	scanf("%d",&n);
	
		geraVetor(a,n);
		mostraVetor(a,n);
		geraVetor(b,n);
		mostraVetor(b,n);
		
		for (i=0; i<n; i++) {
        c[i] = a[i] * b[i];
        printf("% do elemento do vetor resultante: %d\n", (i+1), c[i]);
    }


return 0;
}




