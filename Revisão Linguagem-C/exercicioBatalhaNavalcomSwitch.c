#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int op=0;


void menu()
{
    int mat[6][6]= { 0 }, L, C, cont=0, inc=0;
    do
    {

        system("cls");
        printf("  +---------------------------------------------+\n");
        printf("  |               Menu de Op��es                |\n");
        printf("  +---------------------------------------------+\n");
        printf("  |       1 -  Cadastrar Posi��es dos navios    |\n");
        printf("  |       2 -  Jogar                            |\n");
        printf("  |       3 -  Sair                             |\n");
        printf("  +---------------------------------------------+\n  -> ");
        scanf("%d", &op);
        printf("\n\n\n");

        switch(op)
        {
        case 1:
            do
            {
                cont++;
                printf("\n+-------------------------------+\n");
                printf("Digite a %d posi��o\n", cont);
                printf("Linha: ");
                scanf("%d",&L);
                printf("Coluna: ");
                scanf("%d",&C);

                if(mat[L][C]==1)
                {
                    printf("\n\nPosi��o ja cadastrada!\n");
                    cont--;
                }
                else
                {
                    mat[L][C]=1;
                }
                inc++;
            }
            while(cont!=5);
             printf("\n\n");
                    for(int i=0; i<6; i++)
                    {
                        for(int j=0; j<6; j++)
                        {
                            printf("[ %d ] ",mat[i][j]);
                        }
                        printf("\n");
                    }
                    printf("\n\n");
                    Sleep(3000);

            break;
        case 2:
            if(inc==0)
            {
                system("cls");
                system("color 4");
                printf("\n\n\n\n\n\n\n\n\t\t\t\t+-----------------------------------------------------------+\n");
                printf("\t\t\t\t|                          Aten��o                          |\n");
                printf("\t\t\t\t+-----------------------------------------------------------+\n");
                printf("\t\t\t\t|     As posi��es dos navios ainda n�o foram cadastradas    |\n");
                printf("\t\t\t\t+-----------------------------------------------------------+\n\n");
                Sleep(2000);
                system("cls");
                system("color 7");

            }
            else
            {

                int linha, coluna, vidas=10, qtdN=0,S;
                do{
                printf("    +---------------------------------------------------+\n");
                printf("    |                     JOGAR                         |\n");
                printf("    +---------------------------------------------------+\n\n");


                printf("Digite a posi��o do navio\n");
                printf("Linha: ");
                scanf("%d", &linha);
                printf("Coluna: ");
                scanf("%d", &coluna);

                if(mat[linha][coluna]==1)
                {
                    printf("\n\n  Voc� acertou\n\n");
                    vidas--;
                    qtdN++;
                }
                else
                {
                    printf("\n\n  Voc� errou\n\n");
                    vidas--;
                }

                }while(vidas!=0 && qtdN!=5);

                if(qtdN==5){
                    printf(" +-----------------------------------------+\n");
                    printf(" |     Voc� encontrou todos os navios      |\n");
                    printf(" |            Parabens!!!!!!               |\n");
                    printf(" +-----------------------------------------+\n");
                    system("pause");
                }else{
                    printf(" +-----------------------------------------+\n");
                    printf("   Voc� encontrou %d navios\n", qtdN);
                    printf("        tente novamente \n");
                    printf("+-----------------------------------------+\n");
                    system("pause");
                    system("cls");
                }
                printf("\n\n\n\n+================================+\n");
                printf("|       Deseja Jogar novamente ? |\n");
                printf("+================================+\n");
                printf(" 1- Sim   |   2- N�o\n");
                scanf("%d", &S);
                if(S==2){
                    return 0;
                }else{
                 L=0, C=0, cont=0, inc=0;
                 for(int i=0; i<6; i++){
                    for(int j=0; j<6; j++){
                    mat[i][j]=0;
                 }
                 }
                }
            }
            break;
        case 3:
            return 0;
            break;
        default:
            printf("\nOp��o inv�lida\n");
        }
    }
    while(op!=0);
}

int main()
{
    int mat[6][6]= { 0 }, L, C, cont=0, inc=0;
    setlocale(LC_ALL, "Portuguese");

    menu();
    return 0;
}
