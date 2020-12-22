#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n1,n2,m;
	
		printf ("----------digite dois numeros para saber qual eh o maior----------\n\n\n ");
		printf ("digite o primeiro numero:\n ");
				scanf("%d", &n1);
		printf ("digite o segundo numero:\n ");
				scanf("%d", &n2);
		printf ("nos numeros escolhidos foram: %d e %d\n\n",n1,n2);
		
		if (n1 > n2)
			printf ("o numero maior eh: ");
			else
			printf ("o maior numero eh o: %d",n2);
				
		return 0;
}
