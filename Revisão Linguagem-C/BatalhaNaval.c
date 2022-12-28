#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

void logo()
{
    system("color 3");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t     ________   ________  ___      ___ ________  ___            \n");
    printf("\t\t\t    |\\   ___  \\|\\   __  \\|\\  \\    /  /|\\   __  \\|\\  \           \n");
    printf("\t\t\t    \\ \\  \\\\ \\  \\ \\  \\|\\  \\ \\  \\  /  / | \\  \\|\\  \\ \\  \\          \n");
    printf("\t\t\t     \\ \\  \\\\ \\  \\ \\   __  \\ \\  \\/  / / \\ \\   __  \\ \\  \\         \n");
    printf("\t\t\t      \\ \\  \\\\ \\  \\ \\  \\ \\  \\ \\    / /   \\ \\  \\ \\  \\ \\  \\____    \n");
    printf("\t\t\t       \\ \\__\\\\ \\__\\ \\__\\ \\__\\ \\__/ /     \\ \\__\\ \\__\\ \\_______\\  \n");
    printf("\t\t\t        \\|__| \\|__|\\|__|\\|__|\\|__|/       \\|__|\\|__|\\|_______|  \n");
    printf("\t\t\t  \n");
    printf("\t\t\t\t\t\t    Carregando.... \n");
    Sleep(3000);
    system("cls");
    system("color 7");
}

void Dev()
{
    printf("\n\n\t\t\t\t+--------------------------------+\n");
    printf("\t\t\t\t|      Desenvolvidor por:        |\n");
    printf("\t\t\t\t+--------------------------------+\n");
    Sleep(1000);
    printf("\t\t\t\t|      Luma Fernanda de Sousa    |\n");
    Sleep(1000);
    printf("\t\t\t\t|      F�bio Eloy Passos         |\n");
    Sleep(1000);
    printf("\t\t\t\t+--------------------------------+\n");

}
int main()
{
    SetConsoleTitle("Batalha Naval");
    setlocale(LC_ALL, "Portuguese");
    logo();
    int Tabuleiro[8][8]= {0}, lin, col, qtdT=10,acerto=0, L,C,b=0;

    printf("\t\t\t    +-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-+\n");
    printf("\t\t\t    |               Tabuleiro               |\n");
    printf("\t\t\t    +-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-+\n\n");
    printf("\t\t\t\t 0   1   2   3   4   5   6   7\n");
    for(int i=0; i<8; i++)//Imprimindo o tabuleiro
    {
        printf("\t\t\t\t");
        for(int j= 0; j<8; j++)
        {
            printf("[ ] ");
        }
        printf("%d\n",i);

    }
    printf("\n\n\n    +-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-+\n");
    printf("    |                Preenchendo as posi��es              |\n");
    printf("    +-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-+\n\n");
    for(int i=0; i<5; i++)//Preenchendo os Navios no tabuleiro
    {
        printf("\n\n  Digite a %d posi��o do navio \n\n ", i+1);
        printf(" Linha: ");
        scanf("%d", &lin);
        while(lin<0 || lin>7){
        if(lin<0 || lin>7){

          printf("\n +---------------------------------------------+\n");
          printf(" |              valor inv�lido                 |\n");
          printf(" +---------------------------------------------+\n\n\n");
          printf("\n\n  Digite a %d posi��o do navio \n\n ", i+1);
          printf(" Linha: ");
          scanf("%d", &lin);

        }
        }
        printf("  Coluna: ");
        scanf("%d", &col);
        while(col<0 || col>7){
        if(col<0 || col>7){

          printf("\n +---------------------------------------------+\n");
          printf(" |              valor inv�lido                 |\n");
          printf(" +---------------------------------------------+\n\n\n");
          printf("\n\n  Digite a %d posi��o do navio \n\n ", i+1);
          printf(" Coluna: ");
          scanf("%d", &lin);

        }
        }
        Tabuleiro[lin][col]=1;
    }
    printf("\n\n\n");
    printf("\t\t\t\t  0     1     2     3     4     5     6     7\n");
    for(int i=0; i<8; i++)//Mostrando a tabulero com os Navios
    {
        printf("\t\t\t\t");
        for(int j= 0; j<8; j++)
        {
            if(Tabuleiro[i][j]==1){
              printf("[-%d-] ",Tabuleiro[i][j]);
            }else{
            printf("[ %d ] ",Tabuleiro[i][j]);
            }

        }
        printf("%d\n",i);
    }

    Sleep(4000);
    system("cls");

    do
    {
        b++;

        printf("\n+======================================================================================================================+\n");
        printf("\t\t\t\t                    Encontre os Navios                    \n");
        printf("+======================================================================================================================+\n");
        printf("\t\t\t      Tentativas: %d   Navios: %d \n\n\n", qtdT, 5-acerto);


        printf("\n\n    Digite a %d� tentativa\n\n ",b);


        printf("   Linha: ");
        scanf("%d", &L);
        while(L<0||L>7){


          if(L<0 || L>7){

          printf("\n +---------------------------------------------+\n");
          printf(" |              valor inv�lido                 |\n");
          printf(" +---------------------------------------------+\n\n\n");
          printf("\n\n  Digite a %d posi��o do navio \n\n ", b+1);
          printf(" Linha: ");
          scanf("%d", &L);
        }
        }

        printf("    Coluna: ");
        scanf("%d", &C);
        while(C<0||C>7){
          if(C<0 || C>7){

          printf("\n +---------------------------------------------+\n");
          printf(" |              valor inv�lido                 |\n");
          printf(" +---------------------------------------------+\n\n\n");
          printf("\n\n  Digite a %d posi��o do navio \n\n ", b+1);
          printf(" Coluna: ");
          scanf("%d", &C);
        }


        }
        qtdT--;

        if(Tabuleiro[L][C]==1)
        {
            acerto+=1;
            printf("\n +-------------------------------+\n");
            printf(" |       Voc� acertouuuuu!!!!!   |\n");
            printf(" +-------------------------------+\n");
            if(acerto==5)
            {
                 system("cls");
                 system("color 2");
                 printf("\n\n\n\n\n\n\n\t\t\t\t +---------------------------------------------+\n");
                 printf("\t\t\t\t |       Voc� encontrou TODOS os navios!!!!!   |\n");
                 printf("\t\t\t\t +---------------------------------------------+\n");
                 Sleep(3000);
                 system("cls");
                 system("color 7");
                break;
            }
        }
        else
        {
            printf("\n +-------------------------------+\n");
            printf(" |       Voc� Errou!!!!!         |\n");
            printf(" +-------------------------------+\n");
        }

    }
    while(qtdT!=0);
    system("cls");
    printf("\t\t+------------------------------------------------------------------+\n");
    printf("\t\t|                        Dados e pontua��o                         |\n");
    printf("\t\t+------------------------------------------------------------------+\n");
    printf("\t\t                 Quantidade de navios encontrados: %d\n",acerto);
    printf("\t\t                 Quantidade de tentativas usadas: %d\n",10-qtdT);
    printf("\t\t                 Quantidade de tentativas restantes: %d\n", qtdT);
    printf("\t\t+------------------------------------------------------------------+\n\n");
    Dev();
    Sleep(2000);
    return 0;
}
