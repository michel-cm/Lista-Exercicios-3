#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float r, c, d;
    printf("\n informe valor em reais\n");
   	 scanf("%f",&r);
    printf("\n informe a cotacao\n");
   	 scanf("%f",&c);
    d = r*c;
   	 printf("\n O valor em dolares: $%.2f\n",d);
    return 0;
}
