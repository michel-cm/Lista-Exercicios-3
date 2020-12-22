#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char palavra[100],palavra2[100];
	int n;
	while(1){
		printf("Entre com uma palavra:");
		fflush(stdin);
		gets(palavra);
		printf("Entre com outra palavra:");
		fflush(stdin);
		gets(palavra2);
		if(strcmp(palavra,palavra2)==0)
		   printf("Iguais!\n");
		else
		   printf("Diferentes\n"); 
		n = strlen(palavra);
		printf("Tamanho da palavra 1:%d\n",n); 
		n = strlen(palavra2);
		printf("Tamanho da palavra 2:%d\n",n); 
		/*printf("Copiando as palavras\n");
		strcpy(palavra,palavra2);
		printf("Palavra 1: %s Palavra 2:%s\n",palavra,palavra2);
		strupr(palavra);
		printf("Palavra 1: %s\n", palavra);
		strlwr(palavra2);
		printf("Palavra 2: %s\n", palavra2);*/
		palavra[0] = toupper(palavra[0]);
		printf("Palavra 1: %s\n", palavra);
		palavra2[0] = tolower(palavra2[0]);
		printf("Palavra 2: %s\n", palavra2);
   }// fim while
	return 0;
}
