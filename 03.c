#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


typedef struct {
	char nomeAluno[30];
	float n1,n2,n3;
	int matricula;
}tAluno;
int qtd=0;


void add(tAluno a[]){
	if(qtd==MAX){
		printf("Sistema cheio \n");
		return;
	}
	printf("-------- Cadastro de Alunos --------\n");
	printf("Nome do aluno: ");
	fflush(stdin);
	gets(a[qtd].nomeAluno);
	printf("Matricula do aluno %s: ", a[qtd].nomeAluno);
	scanf("%d",&a[qtd].matricula);
	printf("Nota 1: ");
	scanf("%f",&a[qtd].n1);
	printf("Nota 2: ");
	scanf("%f",&a[qtd].n2);
	printf("Nota 3: ");
	scanf("%f",&a[qtd].n3);
	qtd++;
}
//------------------------------------------------------------------//
	void listar(tAluno a[]){
	int i;
	for(i=0; i<qtd; i++){
		printf("-------- Aluno %d --------\n",i+1);
		printf("Nome: %s\n",a[i].nomeAluno);
		printf("Matricula: %d\n",a[i].matricula);
		printf("Nota 1: %.2f\n",a[i].n1);
		printf("Nota 2: %.2f\n",a[i].n2);
		printf("Nota 3: %.2f\n",a[i].n3);
	}
}
//------------------------------------------------------------------//
void buscaAluno(tAluno a[], char buscaNome[]){
	int i, encontrou=0;
	char nomeAluno[30];
	for(i=0;i<qtd;i++){
		strcpy(nomeAluno, a[i].nomeAluno);
		if(strcmp(strupr(nomeAluno) , strupr(buscaNome) )==0){
		printf("\n^^^^^^^^^^^^ Aluno %d ^^^^^^^^^^^^\n",i+1);
		printf("Nome:%s\nMatricula:%d\nNota 1:%.2f\nNota 2:%.2f\nNota 3:%.2f\n",
		       a[i].nomeAluno, a[i].matricula,a[i].n1, a[i].n2,a[i].n3);
		printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		encontrou=1;
		break; 
	   }
	}
	if(!encontrou) 
	   printf("Aluno nao encontrado !");
}
//------------------------------------------------------------------//
void buscaMatricula(tAluno a[], int mat){
	int i, cont=0, encontrou=0;
	for(i=0; i<qtd; i++){
		if(a[i].matricula == mat){
			printf("Nome:%s\nMatricula:%d\nNota 1:%.2f\nNota 2:%.2f\nNota 3:%.2f\n",
		       a[i].nomeAluno, a[i].matricula,a[i].n1, a[i].n2,a[i].n3);
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	encontrou=1;
		cont++;
		}
	}
if(!encontrou) 
	   printf("Matricula nao encontrada");
}
//------------------------------------------------------------------//
void salvaArquivoBinario(tAluno a[]){
	FILE *arq;
	arq=fopen("Alunos.txt","wb");
	fwrite(&a[0],sizeof(tAluno),qtd,arq);
	printf("Dados salvos com sucesso \n");
	fclose(arq);
}
//------------------------------------------------------------------//
void carregaBinario(tAluno a[]){
	FILE *arq;
	arq=fopen("Alunos.txt","rb");
	if(arq==NULL){
	  printf("Arquivo nao encontrado :(\n");
	  return;
	  }
	 while(fread(&a[qtd],sizeof(tAluno),1,arq) >0  )
	      qtd++;  
	 printf("Dados carregados com sucesso \n");
	fclose(arq);
}
//------------------------------------------------------------------//
void maiorMedia(tAluno a[]  ){


int i,  maiornota1_indice, maiormediageral_indice;
float maiornota1=0,med, maiormediageral=0,mediageral[100];



mediageral[i] = a[i].n1+a[i].n2+a[i].n3;

    if(maiornota1<a[i].n1){

        maiornota1 = a[i].n1;

        maiornota1_indice = i;

    }
    if(mediageral[i]>maiormediageral){
        maiormediageral = mediageral[i];
        maiormediageral_indice = i;
    }
    

 
    printf("\nAluno com maior media: %s",a[maiormediageral_indice].nomeAluno);
     }
  
//------------------------------------------------------------------//
int menu(){
	int op;
	printf("^^^^^^^^^^^^ Cadastro de Alunos ^^^^^^^^^^^^ \n");
	printf("1-Cadastrar Aluno\n");
	printf("2-Mostrar todos os alunos\n");
	printf("3-Buscar Aluno\n");
	printf("4-Buscar Aluno por matricula\n");
	printf("5-Aluno com maior media\n");
	printf("6-Alunos aprovados e reprovados\n");
	printf("7-Carregar dados dos alunos ...\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------------------------------------------------------//
int main(){
	tAluno a[MAX];
	char buscaNome[30];
	int op, mat;
    do{
      op = menu();	
      switch(op){
      	case 1: add(a);
      	break;
      	case 2: listar(a);
      	break;
      	case 3: printf("Nome do aluno para busca:");
      			fflush(stdin); gets(buscaNome);
      			buscaAluno(a, buscaNome);
      	break;		
      	case 4: printf("Matricula para busca:");
      			scanf("%d",&mat);
      			buscaMatricula(a, mat);
      			
      	break;
      		case 5:
      	
           		      			
      	break;
      	case 6: 
      		
      	break;	
		case 7: carregaBinario(a);
      	break;	  	
      	case 0: salvaArquivoBinario(a);
		  		printf("Saindo... \n");
      	break;
	  }
      	getch(); 
      	system("cls");
	}while(op!=0);
	return 0;
}

