#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int matriz[15][15];

    for(int i=0; i<15; i++) //Preenchendo a matriz com valor aleatorios
    {
        for(int j=0; j<15; j++)
        {
            matriz[i][j]=rand()%100;
        }
    }
//Mostrando a matriz
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
        {
            printf("[ %d ]\t",matriz[i][j]);
        }
        printf("\n");
    }
//Achando a diagonal principal
    printf("\n----------------------------------\n");
    for(int i=0; i<15; i++) //Preenchendo a matriz com valor aleatorios
    {
        for(int j=0; j<15; j++)
        {
            if(i==j)
            {
                printf("[ %d ] ", matriz[i][j]);
            }
        }
    }

    return 0;
}
