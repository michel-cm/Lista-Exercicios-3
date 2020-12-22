#include <stdio.h>

void geraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	srand(time(NULL));
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			m[i][j] = rand()%50;
		}// fim for j
	}// fim for i
	
}
//------------------------
void mostraMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("%3d |", m[i][j]);
		}// fim for j
		printf("\n");
	}// fim for i
}

void leiaMatriz(int m[][100], int linhas, int cols){
	int i, j;
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			printf("M[%d][%d]:",i,j);
			scanf("%d",&m[i][j]);
		}// fim for j
	}// fim for i
}

int main(){
	int m[100][100], linhas, cols, menor,i,j;
	printf("Digite os valores da dimensao da matriz:");
	scanf("%d%d",&linhas,&cols);
	geraMatriz(m,linhas,cols);
	mostraMatriz(m,linhas,cols);
	menor = m[0][0];
	for(i=0;i<linhas;i++){
		for(j=0;j<cols;j++){
			if(m[i][j]< menor)
			   menor = m[i][j];  
		}// fim for j
	}// fim for i
	printf("O Menor elemento:%d",menor);
	
		return 0;
}
