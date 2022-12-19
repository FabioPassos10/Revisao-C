#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Enunciado: Leia um vetor de 20 posições e em seguida um valor X qualquer.
// Seu programa devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.


int main()
{
    int vet[20],x;
    for(int i=0; i<20; i++)
    {
        vet[i]=rand()%100;
    }

    for(int i=0; i<20; i++)
    {
        printf("[ %d ] \n",vet[i]);
    }
    printf("Digite o numero que deseja procurar: ");
    scanf("%d", &x);
    for(int i=0; i<20; i++)
    {
        if(x==vet[i]){
            printf("\n\n+--------------------------------------------+\n");
            printf("| O valor %d foi encontrado na posicaoo %d   |\n",x,i);
            printf("+--------------------------------------------+\n");
        }
    }
    return 0;
}
