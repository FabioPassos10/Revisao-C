#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Enunciado: Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor.
// Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.



int main(){

int vet[12],x,y;

for(int i=0; i<12;i++){
    vet[i]=rand()%10;//Preenchendo o vetor com 12 valores aleatorios
}
for(int i=0; i<12;i++){
    printf("[ %d ] ",vet[i]);
}
printf("\n\nDigite a posicao X: ");
scanf("%d", &x);
printf("Digite a posicao Y: ");
scanf("%d", &y);

   x=vet[x];
   y=vet[y];

printf("\nValor de X: %d     | Valor de Y: %d", x,y);
printf("\n\n+------------------------------------------+\n");
printf("          A Soma de %d + %d = %d           \n",x,y,x+y);
printf("+------------------------------------------+\n");

return 0;
}
