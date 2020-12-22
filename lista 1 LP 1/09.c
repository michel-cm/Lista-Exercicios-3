#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float n,tempogasto,velmedia,distanciaperc,litros;
	
	printf("Qual foi o tempo gasto da viagem em MINUTOS ?\n");
	scanf("%f", &tempogasto);
		printf("Qual foi velocidade media da viagem em KM/H ?\n");
		scanf("%f", &velmedia);
		printf("quantos KM/L seu carro faz ?\n");
		scanf("%f", &n);
		
		distanciaperc = (velmedia * tempogasto) / 60;
		printf("A distancia percorrida foi de: %.2f KM\n", distanciaperc);
		
		litros = distanciaperc / n;
		
		printf("foram usados, %.2f litros de gasolina\n", litros );
		
	
	
	

	
	
	
	return 0;
}
