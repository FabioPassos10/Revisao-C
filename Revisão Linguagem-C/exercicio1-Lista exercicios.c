#include <stdio.h>
#include <stdlib.h>

//Fa�a um programa que receba um n�mero e usando la�os de repeti��o calcule e mostre a tabuada desse n�mero.

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
