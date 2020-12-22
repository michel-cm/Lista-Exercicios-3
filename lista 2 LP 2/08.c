#include <stdio.h>
#include "bibliotecaVetor.h"



int main(){
	int a[100],b[100],mult,n,i,x;
	printf("Quantos elementos tera nos vetores:");
	scanf("%d",&n);
	
		leiaVetor(a,n);
		mostraVetor(a,n);
		
		printf("\nQual sera o valor de X ?");
		scanf("%d", &x);
		
			for(i=0;i<n;i++){
		if (b[i] = a[i])
			b[i] = x * a[i];
		}//fimfor
	
	mostraVetor(b,n);
return 0;
}




