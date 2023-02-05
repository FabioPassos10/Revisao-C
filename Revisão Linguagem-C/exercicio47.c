#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Tam 2

typedef struct
{// declarei struct
    char nome[50];
    int idade;
} Pessoa;

Pessoa ColetaInfo(int i)
{ // Coletando os dados do usuario
    Pessoa p;
    wprintf(L"\n+---------- Usuário %d ----------+\n", i + 1);
    fflush(stdin);
    printf(" Nome: ");
    fgets(p.nome, 49, stdin);
    fflush(stdin);
    printf(" Idade: ");
    scanf("%d", &p.idade);
    fflush(stdin);
    return p;
}
void ExibeInfo(Pessoa p, int i){//Exibe as informações cadastradas
    wprintf(L"\n+---------- Usuário %d ----------+\n", i + 1);
    printf(" Nome: %s ", p.nome);
    printf(" Idade: %d \n", p.idade);
   
}
void Menu()
{
    int op;
    Pessoa pessoas[Tam], *Ppessoas;
    do
    {
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

            break;
        case 2:
            system("cls");
            for (int i = 0; i < Tam; i++)
            {
                ExibeInfo(pessoas[i], i);
            }

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