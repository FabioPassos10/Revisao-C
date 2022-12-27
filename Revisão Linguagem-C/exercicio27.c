#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int i;

    printf("\n\t+---------Scanf Convensional-------+\n");
    printf("Digite seu nome: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Nome: %s", nome);

    printf("\n\t+----------Scanf Aprimorado-----------+\n");
    printf("Digite seu nome: ");
    scanf("%19[^\n]s", nome);
    fflush(stdin);
    printf("Nome: %s", nome);

    printf("\n\t+----------Gets-----------+\n");
    printf("Digite seu nome: ");
    gets(nome);
    fflush(stdin);
    puts(nome);

    printf("\n\t+----------fgets-----------+\n");
    printf("Digite seu nome: ");
    fgets(nome,20,stdin);
    fflush(stdin);
    puts(nome);



    return 0;
}

