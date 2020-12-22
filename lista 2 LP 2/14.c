#include<stdio.h>
#include <stdlib.h>


main(){
float tmedio;
int tempo[5],mt=-1,st=0, melhorvolta,i;
for(i=1;i<6;i++){
printf("\ndigite o tempo obtido na %d volta em minutos: ",i);
scanf("%d",&tempo);
}
if( tempo > mt){
mt=tempo;
melhorvolta=i;
}
st=st+tempo;

tmedio=st/5;
printf("\nmelhor tempo foi %d.\n ",mt);
printf("\nvolta q ocorreu o melhor tempo foi %d volta.\n ",melhorvolta);
printf("\ntempo medio das 5 voltas: %f\n ",tmedio);
system("pause");

}
