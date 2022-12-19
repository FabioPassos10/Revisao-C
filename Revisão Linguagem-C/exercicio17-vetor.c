#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Enunciado: Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui.


int main()
{
    int vet[40], nPares;
    for(int i=0; i<40; i++)
    {
        vet[i]=rand()%100;
        if(vet[i]==0)
        {
            nPares;
        }
        else if(vet[i]%2==0)
        {
            nPares++;
        }
    }
    printf("\n\tPosicao   \tValor\n");
    for(int i=0; i<40; i++) //Mostrando ovetor
    {
        if(vet[i]==0)
        {

        }
        else
        {
            if(vet[i]%2==0)
            {
                printf("\t    %d\t     [-> %d <-]\n",i,vet[i]);
            }
        }

    }
    printf("\n\n\nO numero de pares eh: %d\n\n\n",nPares);

    return 0;
}
