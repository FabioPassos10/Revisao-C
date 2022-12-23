#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{

    int mat[4][4], n, soma=0, val=0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            mat[i][j]=rand()%10;
        }
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("[ %d ]\t",mat[i][j]);
        }
        printf("\n");
    }

    //Pedindo o numero da coluna


            do{
              printf("\nDigite o valor da coluna que deseja calcular: ");
              scanf("%d",&n);
            }while(n>3 || n<0);


            printf("\n\n");
            for(int i=0; i<4; i++)
            {
                printf("[ %d ]",mat[i][n]);
                soma+=mat[i][n];
            }
            printf("\n\nO valor da soma eh: %d\n\n\n\n\n\n",soma);









    return 0;
}

