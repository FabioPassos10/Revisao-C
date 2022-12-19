#include <stdio.h>
#include <stdlib.h>

//Utilizando a estrutura de repetição for,
//faça um programa em C que receba 10 números e conte quantos deles estão no intervalo [10,20]
//e quantos deles estão fora do intervalo, escrevendo estas informações.

int main(){

    int n, qtdF, qtdD;
    for(int i =0; i<10;i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d", &n);
        if(n<10 && n>20){
        qtdD++;
        }else{
        qtdF++;
        }
    }
    printf("\nQuantidade de numeros que estao dentro: %d\n\n\n", qtdD);
    printf("\nQuantidade de numeros que estao fora: %d\n\n\n", qtdF);

return 0;
}

