#include <stdio.h>
#include <stdlib.h>

main(){

int mat[3][3],l,c;

		for(l=0;l<3;l++)
	{

	for(c=0;c<3;c++)

	{
		printf("Valor posicao[%d][%d]",l,c);
			scanf("%d",&mat[l][c]);

}

}

	for(l=0;l<3;l++)

{

	for(c=0;c<3;c++)

{

	if(mat[l][c]%2==0)

		printf("Par: %d\n",mat[l][c]);

	else

		printf("Impar: %d\n",mat[l][c]);

}

}

	system("PAUSE");

}
