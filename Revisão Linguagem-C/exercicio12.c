#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>

//Desenvolvido por: Fábio Eloy Passos


void concluir(){
system("cls");
system("color 2");
printf("\a");
printf("\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t+---------------------------------------+\n");
printf("\t\t\t\t\t|     Voto Contabilizado com Sucesso!!! |\n");
printf("\t\t\t\t\t+---------------------------------------+\n");
Sleep(2000);
system("color 7");
}

void logoInicial(){
system("Color 3");
printf("\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t\t  ______ _      _ _                  _  \n");
printf("\t\t\t\t\t |  ____| |    (_) |                | | \n");
printf("\t\t\t\t\t | |__  | | ___ _| |_ ___  _ __ __ _| | \n");
printf("\t\t\t\t\t |  __| | |/ _ \\ | __/ _ \\| '__/ _` | | \n");
printf("\t\t\t\t\t | |____| |  __/ | || (_) | | | (_| | | \n");
printf("\t\t\t\t\t |______|_|\\___|_|\\__\\___/|_|  \\__,_|_| \n");
printf(" \n\n");
Sleep(4000);
system("color 7");
system("cls");

}

void menu(int qtd)
{
    printf("\t+-----------------------------------------+\n");
    printf("\t|            MENU DE CANDIDATOS           |\n");
    printf("\t+-----------------------------------------+\n");
    printf("\t|         1. Candidato Jair Rodrigues     |\n");
    printf("\t|         2. Candidato Carlos Luz         |\n");
    printf("\t|         3. Candidato Neves Rocha        |\n");
    printf("\t|         4. Nulo                         |\n");
    printf("\t|         5. Branco                       |\n");
    printf("\t|         6. Apuração e encerramento      |\n");
    printf("\t+-----------------------------------------+\n");
    printf("\n\tEntre com o seu voto: ");
}

int main()
{

    setlocale(LC_ALL, "Portuguese");
    SetConsoleTitle("Eleitoral");
    int op, Jr=0, Cl=0, Nr=0, nulo=0,branco=0,qtd=0,arb=0;
    logoInicial();
do{
        if(Jr==0 && Cl==0 && Nr ==0&&nulo == 0 && branco==0){
        qtd+=0;
        }else{
        qtd++;
        }

    system("cls");
    menu(qtd);
    scanf("%d", &op);
    switch(op)
    {
    case 1:
        system("cls");
        printf("\t+-----------------------------------------+\n");
        printf("\t|        Candidato: Jair Rodrigues        |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\t|             Confirmar voto              |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\t|     1-SIM         |          2-NÃO      |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\tDeseja continuar: ");
        scanf("%d", &arb);
        if(arb==1){

           Jr++;
           concluir();
        }else{
        break;
        qtd--;
        }
        break;
    case 2:
        system("cls");
        printf("\t+-----------------------------------------+\n");
        printf("\t|        Candidato: Carlos Luz            |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\t|             Confirmar voto              |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\t|     1-SIM         |          2-NÃO      |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\tDeseja continuar: ");
        scanf("%d", &arb);
        if(arb==1){
           Cl++;
           concluir();
        }else{
        break;
        qtd--;
        }

        break;
    case 3:
        system("cls");
        printf("\t+-----------------------------------------+\n");
        printf("\t|        Candidato: Neves Rocha           |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\t|             Confirmar voto              |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\t|     1-SIM         |          2-NÃO      |\n");
        printf("\t+-----------------------------------------+\n");
        printf("\tDeseja continuar: ");
        scanf("%d", &arb);
        if(arb==1){
           Nr++;
           concluir();
        }else{
        break;
        qtd--;
        }


        break;
    case 4:
        system("cls");
        printf("\t+-------------------------------------------------------------------+\n");
        printf("\t|                             Voto Nulo                             |\n");
        printf("\t+-------------------------------------------------------------------+\n");
        printf("\t| Atenção, Votar nulo faz com que outras pessoas descidam por você. |\n");
        printf("\t+-------------------------------------------------------------------+\n");
        printf("\t|                    1-SIM         |          2-NÃO                 |\n");
        printf("\t+-------------------------------------------------------------------+\n");
        printf("\tDeseja continuar: ");
        scanf("%d", &arb);
        if(arb==1){
           nulo++;
           concluir();
        }else{
        break;
        qtd--;
        }


        break;
    case 5:
        system("cls");
        printf("\t+--------------------------------------------------------------------------+\n");
        printf("\t|                             Voto em branco                               |\n");
        printf("\t+--------------------------------------------------------------------------+\n");
        printf("\t|  Atenção, Votar em branco faz com que outras pessoas descidam por você.  |\n");
        printf("\t+--------------------------------------------------------------------------+\n");
        printf("\t|                        1-SIM         |          2-NÃO                    |\n");
        printf("\t+--------------------------------------------------------------------------+\n");
        printf("\tDeseja continuar: ");
        scanf("%d", &arb);
        if(arb==1){
           branco++;
           concluir();
        }else{
        break;
        qtd--;
        }

        break;
    case 6:
        if(qtd == 0){
            printf("\n\n\n\n\t\t+------------------------------------------------------------------------------------+\n");
            printf("\t\t|     Você ainda não votou em nenhuma opção, por favor vote em um dos candidatos     |\n");
            printf("\t\t+------------------------------------------------------------------------------------+\n\n\n\n\n\n");
            system("pause");

        }else{
        system("cls");
        printf("\n\t\t\t\t------------ Apuração dos votos ------------\n\n");
        printf("\t\t\t\t\t  Quantidade de eleitores: %d\n\n", qtd);
        printf("\t\t\t\t\t  Candidato Jair Rodrigues: %d \n", Jr);
        printf("\t\t\t\t\t  Candidato Carlos Luz: %d\n",Cl);
        printf("\t\t\t\t\t  Candidato Neves Rocha: %d\n", Nr);

        printf("\n\n\t\t\t\t\t---- Demais votos -----\n");
        printf("\t\t\t\t\t     Votos nulo: %d \n", nulo);
        printf("\t\t\t\t\t     Votos em branco: %d\n",branco);


        if(Jr >Cl && Jr>Nr){
            printf("\t\t\t   +-------------------------------------------------------+\n");
            printf("\t\t\t   |           Candidato vencedor: Jair Rodrigues          |\n");
            printf("\t\t\t   +-------------------------------------------------------+\n\n\n\n\n\n\n\n");
        }else if(Cl>Jr && Cl>Nr){
            printf("\t\t\t   +-------------------------------------------------------+\n");
            printf("\t\t\t   |           Candidato vencedor: Carlos Luz              |\n");
            printf("\t\t\t   +-------------------------------------------------------+\n\n\n\n\n\n\n\n");
        }else if(Nr>Jr&& Nr>Cl){
            printf("\t\t\t   +-------------------------------------------------------+\n");
            printf("\t\t\t   |           Candidato vencedor: Neves Rocha             |\n");
            printf("\t\t\t   +-------------------------------------------------------+\n\n\n\n\n\n\n\n");
        }else if(Jr == Cl || Jr ==Nr){
            printf("\t\t\t   +-------------------------------------------------------+\n");
            printf("\t\t\t   |           Situação ainda indefinida: Empate.          |\n");
            printf("\t\t\t   +-------------------------------------------------------+\n\n\n\n\n\n\n\n");
        }else if(Cl == Jr || Cl ==Nr){
            printf("\t\t\t   +-------------------------------------------------------+\n");
            printf("\t\t\t   |           Situação ainda indefinida: Empate.          |\n");
            printf("\t\t\t   +-------------------------------------------------------+\n\n\n\n\n\n\n\n");
        }else if(Nr == Jr || Nr ==Cl){
            printf("\t\t\t   +-------------------------------------------------------+\n");
            printf("\t\t\t   |           Situação ainda indefinida: Empate.          |\n");
            printf("\t\t\t   +-------------------------------------------------------+\n\n\n\n\n\n\n\n");
        }

        system("pause");
        return 0;
        }
        break;
    default:
         system("cls");
         printf("\n\n\n\t\t\t+-------------------------------------------------------------------+\n");
         printf("\t\t\t|  Valor inválido, verifique as opções no menu e tente novamente    |\n");
         printf("\t\t\t+-------------------------------------------------------------------+\n\n\n\n\n\n\n\n\n\n");
         system("pause");
         qtd--;
    }
}while(op!=7);

    return 0;
}
