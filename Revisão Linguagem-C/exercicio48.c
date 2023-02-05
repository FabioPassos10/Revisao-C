#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Tam 2

typedef struct
{//Definindo struct pessoa 
    int id;
    char nome[50];
    int idade;
} Pessoa;

Pessoa ColetaInfo(int i)
{ // Coletando os dados do usuario
    Pessoa p;
    if (i==0)
    {
        printf("\n\n+--------------------------------------------------+\n");
        wprintf(L"|                Cadastro de Usuário               |\n");
        printf("+--------------------------------------------------+\n\n");
    }
    wprintf(L"\n+---------- Usuário %d ----------+\n", i + 1);
    fflush(stdin);
    printf(" Nome: ");
    fgets(p.nome, 49, stdin);
    fflush(stdin);
    printf(" Idade: ");
    scanf("%d", &p.idade);
    fflush(stdin);
    p.id = i+1;
    return p;
}
void ExibeInfo(Pessoa p, int i)
{ // Exibe as informações cadastradas
   
    if (i==0)
    {
        printf("\n\n+--------------------------------------------------+\n");
        printf("|                Pessoas Cadastradas               |\n");
        printf("+--------------------------------------------------+\n\n");
    }

    wprintf(L"\n+---------- Usuário %d ----------+\n", i + 1);
    printf(" Id: %d\n", p.id);
    printf(" Nome: %s ", p.nome);
    printf("Idade: %d \n\n", p.idade);
    
    
}
void BuscarPessoa(int cod, Pessoa *p, int i)
{ // Exibe as informações cadastradas
  
   if (i==0)
    {
        printf("\n\n+--------------------------------------------------+\n");
        printf("|                  Buscando pessoa                 |\n");
        printf("+--------------------------------------------------+\n\n");
    }
    
   if(p->id == cod){

    wprintf(L"\n\n+---------- Usuário %d ----------+\n", i + 1);
    printf(" Nome: %s ", p->nome);
    printf("Idade: %d \n\n", p->idade);
    
   }else{
    system("cls");
    
    printf("\n\n\t\t+---------------------------------------------------------+\n");
    wprintf(L"\t\t| Pessoa não encontrada, verifique o código identificador |\n");
    printf("\t\t+---------------------------------------------------------+\n");

   }
    
}


void Menu()
{
    int op, cod=0;
    Pessoa pessoas[Tam], *Ppessoas;
    Ppessoas = &pessoas;
    do
    {
        system("cls");
        printf("\n+-----------------------------------------------+\n");
        wprintf(L"|                MENU OPÇÕES                    |\n");
        printf("+-----------------------------------------------+\n");
        wprintf(L"|           1 - Cadastrar Usuários              |\n");
        wprintf(L"|           2 - Listar todos os usuários        |\n");
        wprintf(L"|           3 - Buscar Usuário                  |\n");
        wprintf(L"|           0 - Sair                            |\n");
        printf("+-----------------------------------------------+\n");
        printf("-> ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            system("cls");
            for (int i = 0; i < Tam; i++)
            {
                pessoas[i] = ColetaInfo(i);
            }
           system("pause");
            break;
        case 2:
            system("cls");
            for (int i = 0; i < Tam; i++)
            {
                ExibeInfo(pessoas[i], i);
            }
            system("pause");

            break;
        case 3:
            system("cls");
            printf("\n Digite o cod identifcador da pessoa: ");
            scanf("%d", &cod);
            fflush(stdin);
            for (int i = 0; i < Tam; i++)
            {
               BuscarPessoa(cod,Ppessoas, i);
            }
            system("pause");

            break;
        case 0:
            exit;

            break;

        default:

            printf("+-----------------------------------------+\n");
            wprintf(L"|             Opção Inválida              |\n");
            printf("+-----------------------------------------+\n");
            break;
        }

    } while (op != 0);
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    Menu();
    return 0;
}