#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    float freitas,russo;
    int T;
    freitas = 1.50;
    russo = 1.40;
    T=0;

    do { 
          freitas = freitas+0.1;
          russo = russo+0.2;
          T++;
          }while( russo <= freitas );
          cout<<"Tamanho de Freitas ....: "<<freitas<<endl;
          cout<<"Tamanho do Russo ...: "<<russo<<endl;
          cout<<"Tempo necessario para russo ficar maior que freitas foi ..: "<<T<<endl;
          system("pause");
          return 0;
}
