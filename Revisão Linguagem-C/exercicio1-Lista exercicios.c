#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba um número e usando laços de repetição calcule e mostre a tabuada desse número.

int main(){
int i=0,n;
printf("Digite o valor da tabuada: ");
scanf("%d", &n);
while(i<11){

    printf("%d x %d = %d\n",n,i,n*i);
    i++;
}


return 0;
}
