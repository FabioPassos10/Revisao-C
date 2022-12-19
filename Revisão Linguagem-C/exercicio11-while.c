#include <stdio.h>
#include <stdlib.h>

//3. Faça um programa, utilizando while e listas, que permita o usuário escrever o nome de cinco pessoas e os mostre na tela.

int main(){

int n=1,a=1;
char nome[5][30];

do{

    printf("digite o nome da %d pessoa: ",n);
    scanf("%s", &nome[n]);

    n++;
}while(n <=5);

do{
    printf("[ %s ] ",nome[n]);
    a++;
}while(n<6);


return 0;
}
