#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


typedef struct {
	char nome[30];
	float potencia,horas;
	}tEletro;
int qtd=0;


void add(tEletro e[]){
	if(qtd==MAX){
		printf("Sistema cheio \n");
		return;
	}
	printf("-------- Cadastro de Eletrodomésticos --------\n");
	printf("Nome do Eletro: ");
	fflush(stdin);
	gets(e[qtd].nome);
	printf("Potencia: ");
	scanf("%f",&e[qtd].potencia);
	printf("tempo medio ativo por dia em hrs: ");
	scanf("%f",&e[qtd].horas);
	qtd++;
	return 1;
}
//------------------------------------------------------------------//
	void listar(tEletro e[]){
	int i;
	for(i=0; i<qtd; i++){
		printf("-------- Eletro %d --------\n",i+1);
		printf("Nome: %s\n",e[i].nome);
		printf("Potencia: %.2f KW\n",e[i].potencia);
		printf("Tempo medio ativo por dia: %.2f Hrs\n",e[i].horas);
	}
}
//------------------------------------------------------------------//
void salvaArquivoBinario(tEletro e[]){
	FILE *arq;
	arq=fopen("Eletros.txt","wb");
	fwrite(&e[0],sizeof(tEletro),qtd,arq);
	printf("Dados salvos com sucesso \n");
	fclose(arq);
}
//------------------------------------------------------------------//
void carregaBinario(tEletro e[]){
	FILE *arq;
	arq=fopen("Eletros.txt","rb");
	if(arq==NULL){
	  printf("Arquivo nao encontrado :(\n");
	  return;
	  }
	 while(fread(&e[qtd],sizeof(tEletro),1,arq) >0  )
	      qtd++;  
	fclose(arq);
}
//------------------------------------------------------------------//
void buscaEletro(tEletro e[], char buscaNome[]){
	int i, encontrou=0;
	char nome[30];
	for(i=0;i<qtd;i++){
		strcpy(nome, e[i].nome);
		if(strcmp(strupr(nome) , strupr(buscaNome) )==0){ 
		printf("\n^^^^^^^^^^^^ Eletro %d ^^^^^^^^^^^^\n",i+1);
		printf("Nome:%s\nPotencia:%f KW\nTempo medio ativo por dia:%.2f Hrs\n",
		       e[i].nome, e[i].potencia,e[i].horas);
		printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
		encontrou=1;
		break; 
	   }
	}
	if(!encontrou) 
	   printf("Eletro nao encontrado !");
}
//------------------------------------------------------------------//

void buscaEletroMaior(tEletro e[],float valor){
	int i, existe = 0;
	int cont=0;
	for(i=0; i<qtd; i++){
		if(valor < e[i].potencia){
			printf("*** Eletro %d ***\n",i+1);
			printf("Nome: %s\n",e[i].nome);
			printf("Potencia: %.2f KW\n",e[i].potencia);
			printf("Tempo medio ativo por dia: %.2f Hrs\n",e[i].horas);
			//---------------------------------------//
			
			existe = 1;
			cont++;
		}
	}
	
	if(existe == 0){
		printf("Nao existe eletro superior a esse valor!\n");
	}
	}
//------------------------------------------------------------------//
	float consumo(tEletro e[]){
	int i;
	float total=0,totalm,rsd,rsm;
	for(i=0;i<qtd;i++){
		total+=e[i].potencia;
		total = total;
		totalm = total * 30;
		
	}
	printf("\n%.2f Consumo Diario em KW \n", total);
	printf("\n%.2f Consumo Mensal em KW \n", totalm);
}

//------------------------------------------------------------------//
int menu(){
	int op;
	printf("^^^^^^^^^^^^ Cadastro de Eletros ^^^^^^^^^^^^ \n");
	printf("1-Cadastrar Eletro\n");
	printf("2-Mostrar todos os Eletros\n");
	printf("3-Buscar Eletro pelo nome\n");
	printf("4-Buscar Eletro que gastam mais que valor x\n");
	printf("5-Consumo diario \n");
	printf("6-Carregar dados\n");
	printf("7-Salvar dados em arquivo ...\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------------------------------------------------------//
int main(){
	tEletro e[MAX];
	char buscaNome[30];
	int op;
	float valor,total;
	
    do{
      op = menu();	
      switch(op){
      	case 1: add(e);
      	break;
      	case 2: listar(e);
      	break;
      	case 3: printf("Nome do Eletro para busca:");
      			fflush(stdin); gets(buscaNome);
      			buscaEletro(e, buscaNome);
      	break;		
      	case 4: printf("\nBuscar Eletro que gasta mais que um valor X:");
      			printf("\nQual o valor para busca ?:");
      			scanf ("%f", &valor);
      			buscaEletroMaior(e, valor);
      			
      	break;
      		case 5: 
			 consumo(e);
			 		
      	break;
      	case 6: carregaBinario(e);
      	printf("dados carregados com sucesso");
      		
      	break;	
		case 7: salvaArquivoBinario(e);
      	break;	  	
      	case 0: 
		  		printf("Saindo... \n");
      	break;
	  }
      	getch(); 
      	system("cls");
	}while(op!=0);
	return 0;
}

