#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int mat[15][15],n,soma=0;
    for(int i= 0; i<15; i++)
    {
        for(int j= 0; j<15; j++)
        {
            mat[i][j]=rand()%10;
        }
    }
     for(int i= 0; i<15; i++)
    {
        for(int j= 0; j<15; j++)
        {
            printf("[ %d ] ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\nDigite o numero da coluna que deseja: ");
    scanf("%d", &n);
    for(int i= 0; i<15; i++)
    {
            soma+= mat[i][n];
    }
printf("A soma da coluna %d eh: %d", n, soma);


    return 0;
}
