#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define Tam 3


struct pessoa{
   int id;
   int idade;
   char nome[50];

   };
   struct pessoa Pessoa, *loc_pessoa;
   loc_pessoa=&Pessoa;
   printf("Digite o nome: ")
   scanf("%d", loc_pessoa->nome);



int main()
{
    setlocale(LC_ALL, "portuguese");



    return 0;
}


