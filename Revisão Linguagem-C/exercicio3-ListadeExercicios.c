#include <stdio.h>
#include <stdlib.h>

//Fazer um programa para encontrar todos os números pares entre 1 e 100.
int main(){
    int i=1, qtdP=0;
    for(i=1; i<101;i++){
     if(i%2==0){
       printf("[ %d ] \n",i);
       qtdP++;
     }
    }
    printf("\nA quantidade de numeros pares eh: %d", qtdP);
return 0;
}

