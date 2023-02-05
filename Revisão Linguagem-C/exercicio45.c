#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Tam 1

typedef struct 
{
    char nome[50];
    int idade;
}Usuario;

Usuario ColetaDados(){
    Usuario u;
    printf(" Digite seu nome: ");
    fgets(u.nome, 49, stdin);
    fflush(stdin);
    printf(" Digite sua idade: ");
    scanf("%d", &u.idade);
    fflush(stdin);
    return u;
}

void ExibeInfo(Usuario u, int i){
    wprintf(L"\n+---------------- Usuário %d ----------------+ \n\n",i+1);
    printf(" Nome: %s", u.nome);
    printf(" Idade: %d\n", u.idade);

}


int main(){
setlocale(LC_ALL,"portuguese");

Usuario Pessoa[Tam], *p;

for (int i = 0; i < Tam; i++)
{
    Pessoa[i] = ColetaDados();
}
for (int i = 0; i < Tam; i++)
{
    ExibeInfo(Pessoa[i], i);
}




    return 0;
}