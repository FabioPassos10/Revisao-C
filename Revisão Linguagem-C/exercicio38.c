#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Tam 3 //Tamanho do vetor de pessoas

typedef struct {
    int id;
    char nome[60];
    int idade;
}Pessoa;

Pessoa lerpessoa(){
    Pessoa p;
    int i = 1;
    wprintf(L"\n ---------- Usuário %d---------- \n",i);
    printf(" Digite seu nome: ");
    fgets(p.nome, 59, stdin);
    fflush(stdin);
    printf(" Digite sua idade: ");
    scanf("%d", &p.idade);
    fflush(stdin);
    p.id = i;
    i++;
    return p;
}

void ImprimePessoa(Pessoa p){// Função que imprime a imformação das pessoas cadastradas
    int i=1;
    wprintf(L"\n ---------- Usuário %d---------- \n",i);
    printf("\n Id: %d", p.id);
    printf("\n Nome: %s", p.nome);
    printf(" Idade: %d", p.idade);
    i++;
}

int main(){
setlocale(LC_ALL,"portuguese");
Pessoa pessoas[Tam]; // Declarando uma variavel do tipo struct Pessoas
for (int i = 0; i < Tam; i++)
{
 pessoas[i]=lerpessoa();   
}

for (int i = 0; i < Tam; i++)
{
    ImprimePessoa(pessoas[i]);
}
    return 0;
}