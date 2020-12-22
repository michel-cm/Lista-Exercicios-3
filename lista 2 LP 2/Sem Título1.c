#include <stdio.h>
#include <math.h>

int main(){
	int a,d,crit,segcri,damage;
	printf("Valor ataque");
		scanf("%d",&a);
		
		printf("Valor do critico");
		scanf("%d",&crit);
		
		printf("Valor da defesa inimiga");
		scanf("%d",&d);
		
		printf("Valor do bloqueio de critico inimigo");
		scanf("%d",&segcri);
		
		
		damage = a+crit-segcri-d;
		printf ("%d" ,damage);
			
return 0;

}
