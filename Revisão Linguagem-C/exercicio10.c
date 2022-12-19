#include <stdio.h>
#include <stdlib.h>

//2. Faça um programa, utilizando while, que mostre na tela de 0 até N, em que N é o limite inserido pelo usuário.

int main(){

int n=0,lim;
printf("Digite o limite desejado: ");
scanf("%d",&lim);
while(n <=lim){

    printf("[ %d ]\n",n);

    n++;
}
printf("\n\n");
return 0;
}
