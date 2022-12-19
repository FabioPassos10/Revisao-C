#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
void Logo(){
printf("\n\n\n");
printf("\t\t\t $$\\   $$\\       $$\\      $$\\                     $$\\                      \n");
printf("\t\t\t $$$\\  $$ |      $$$\\    $$$ |                    \__|                     \n");
printf("\t\t\t $$$$\\ $$ |      $$$$\\  $$$$ | $$$$$$\\   $$$$$$\\  $$\  $$$$$$$\\  $$$$$$\\   \n");
printf("\t\t\t $$ $$\\$$ |      $$\\$$\\$$ $$ | \\____$$\ $$  __$$\\ $$ |$$  _____|$$  __$$\\  \n");
printf("\t\t\t $$ \\$$$$ |      $$ \\$$$  $$ | $$$$$$$ |$$ /  $$ |$$ |$$ /      $$ /  $$ | \n");
printf("\t\t\t $$ |\\$$$ |      $$ |\\$  /$$ |$$  __$$ |$$ |  $$ |$$ |$$ |      $$ |  $$ | \n");
printf("\t\t\t $$ | \\$$ |      $$ | \\_/ $$ |\\$$$$$$$ |\\$$$$$$$ |$$ |\\$$$$$$$\\ \\$$$$$$  | \n");
printf("\t\t\t \\__|  \\__|      \\__|     \\__| \\_______| \\____$$ |\\__| \\_______| \\______/  \n");
printf("\t\t\t                                        $$\   $$ |                         \n");
printf("\t\t\t                                        \\$$$$$$  |                         \n");
printf("\t\t\t                                         \\______/                           \n");
printf("\n");
Sleep(2000);
system("cls");

}

int main()
{
    SetConsoleTitle("Gerador de Numero Aleatorio");
    Logo();
    setlocale(LC_ALL, "Portuguese");
    int n,Usern,qtdtent=0;
    srand(time(NULL));
    n = rand()%500;
    printf("[ %d ]\n", n);
    do{

    printf("\n Qual é o numero mágico ?  ");
    scanf("%d", &Usern);
    qtdtent++;
    if(Usern > 500){
    printf("\n\n   Atenção o numero que você digitou é inválido, o número mágico é um número entre 1 e 500\n");
    printf("\n   Não desanime, tente novamente :)\n\n");
    system("pause");
    system("cls");
    }else if(Usern < n){
    printf("\n+-----------------------------+\n");
    printf("\n DICA: É mais do que %d\n",Usern);
    printf("\n+-----------------------------+\n");
    }else if(Usern > n){
    printf("\n+-----------------------------+\n");
    printf("\n DICA: É menos do que %d\n", Usern);
    printf("\n+-----------------------------+\n");
    } else{
        system("cls");
        printf("\t\t+-----------------------------------------+\n");
        printf("\t\t|      Parabens Você acertouuu!!!         |\n");
        printf("\t\t+-----------------------------------------+\n\n");

        printf("Quantidade de tentativas: %d\n\n", qtdtent);
        if(qtdtent<=3){
        printf("\nTentantivas: Você é muito sortudo!!!\n");
        }else if(qtdtent>3 && qtdtent<7){
        printf("\nTentativas: Você é sortudo!!!\n");
        }else if(qtdtent>6 && qtdtent<11){
        printf("\nTentativas: Normal!!!\n");
        }else{
        printf("\nTentativas: Que azar, não desanime tente de novo. \n\n");
        }
        return 0;
    }

    }while(Usern!=n);
}
