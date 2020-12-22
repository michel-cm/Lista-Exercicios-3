#include <stdio.h>
#include <stdlib.h>

int main()

{

int a[5], b[5],i,j,p=0;

printf("Digite os 2 vetores de 5 posicoes : ");

for (i=0; i<5; i++)

{

scanf("%i",&a);

}

printf("\n\n");

for (i=0; i<5; i++)

{

scanf("%i",&b);

}

for (i=0; i<5; i++)

for (j=0; j<5; j++)

{

if (a==b[j])

printf("%i",b[j]);

}

system("PAUSE");

return 0;

}
