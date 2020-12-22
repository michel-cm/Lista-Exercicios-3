#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 10


int main(){

int alunos, i, j, qstCerta;
char Gabarito[TAM], respostaAluno;

		printf("numero de alunos?:");
			scanf("%d", &alunos);

		printf("Gabarito da prova:\n");
	for(i = 0; i < TAM; i++)
	{
	printf("Resposta da questão %d:", i+1);
	scanf(" %c", &Gabarito[i]);	
	}

for(i = 0; i < alunos; i++)
	{
	qstCerta = 0;	
	printf("Aluno %d:\n", i+1);	
	for(j = 0; j < TAM; j++)
		{
		printf("resposta da questão %d:", j+1);
		scanf(" %c", &respostaAluno);	
			if(respostaAluno == Gabarito[j]) 
			{
			qstCerta++;	
			}
		}
		printf("Aluno %d acertou %d", i+1, qstCerta);
	}

return 0;	
}
