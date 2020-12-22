#include <stdio.h>

int main(){
	int dia;
	while(1){
		printf("numero do dia:\n");
	scanf("%d",&dia);
	
	switch(dia){
		case 1: 
			printf("domingon\n");
			break;
		case 2: 
			printf("segunda\n");
			break;
		
		case 3: 
			printf("terca\n");
			break;
		
		case 4: 
			printf("quarta\n");
			break;
		
		case 5: 
			printf("quinta\n");
			break;
			
		case 6: 
			printf("sexta\n");
			break;
			
		case 7: 
			printf("sabado\n");
			break;
			
		default:
			printf("dia invalido\n");
		
	}// fim switch
}// fim do while
	return 0;
}
