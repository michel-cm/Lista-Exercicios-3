#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int r,a,b,v;
		
		printf ("quantas bolas foram conquistadas pelo participante:  \n\n\n");
		printf ("Verdes:");
		scanf("%d",&v);
		printf ("\n");
		printf ("Amarelas:");
		scanf("%d",&a);
		printf ("\n");
		printf ("Brancas:");
		scanf("%d",&b);	
		printf ("\n");
		
		v=10,a=5,b=3;
		r = a + b + v;
		
		printf("A pontuacao final foi de: %d", r);
		 
return 0;
		
}
