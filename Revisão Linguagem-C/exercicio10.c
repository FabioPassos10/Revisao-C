#include <stdio.h>
#include <stdlib.h>

//2. Fa�a um programa, utilizando while, que mostre na tela de 0 at� N, em que N � o limite inserido pelo usu�rio.

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
