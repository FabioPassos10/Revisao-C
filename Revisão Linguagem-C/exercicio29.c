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
   typedef struct pessoa Pessoa;


int main()
{
    int Id=0;
    setlocale(LC_ALL, "portuguese");

   Pessoa lista[Tam];
   for(int i=0; i<Tam; i++){
    printf("Digite o nome da pessoa %d: ",i+1);
    fgets(lista[i].nome,50,stdin);
    fflush(stdin);

    printf("Digite a idade da %d pessoa: ",i+1);
    scanf("%d", &lista[i].idade);
    fflush(stdin);
    lista[i].id = i+1;
    printf("\n+-------------------------+\n");

   }

   for(int i=0; i<Tam; i++){
    printf("\n");
    printf("Id: %d\n", lista[i].id);
    printf("Nome da %d pessoa: %s\n",i+1, lista[i].nome);
    printf("Idade da %d pessoa: %d\n",i+1, lista[i].idade);
   }
   system("pause");
   system("cls");
   printf("Qual o Id da pessoa que deseja encontrar: ");
   scanf("%d", &Id);


    printf("\n+----------------------------+\n");
    for(int i=0; i<Tam; i++){
    if(lista[i].id==Id){
    printf("Id: %d\n", lista[i].id);
    printf("Nome da pessoa: %s\n", lista[i].nome);
    printf("Idade da pessoa: %d\n\n", lista[i].idade);
    }
   }

    return 0;
}

