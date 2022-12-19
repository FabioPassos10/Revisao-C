#include <stdio.h>
#include <stdlib.h>

//Escrever um programa para exibir os números de 1 até 50 na tela.

int main(){
    int i=1;
    while(i<51){//Usando while
        printf("%d ",i);
        i++;
    }
    printf("\n=======================\n");

    for(int n =0; n<51;n++){//Usando for
       printf("%d \n",n);
    }
return 0;
}
