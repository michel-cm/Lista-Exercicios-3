#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float cdf,cf;
	printf("digite o custo de fabrica: \n");
	scanf("%f", &cdf);
	 

	 cf = cdf + (cdf * 0.67);
	 
	 printf (" O custo final ao consumidor sera de: %.2f", cf);
	
	 
	

	//	custo de fabrica + porcentagem do distribuidor + impostos //
			//	porcentagem do distribuidor = 25%//
		//impostos = 42%//
	
	
	
	
	return 0;
}
