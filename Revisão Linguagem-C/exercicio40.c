#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define Tam 1

typedef struct{
    int dia;
    int ano;
    char mes[30];
}dataNascimento;

typedef struct 
{
  char nome[30];
  int idade;
  char sexo[2];
  char CPF[15];
  char cargo[30];
  int cod;
  dataNascimento data;
}funcionario;

funcionario ColetaDados(){
    funcionario f;
    int i= 1;
    wprintf(L"\n ---------- Usuário %d ----------\n",i);
    printf(" Digite seu nome: ");
    fgets(f.nome, 29, stdin);
    fflush(stdin);
    printf(" Digite sua idade: ");
    scanf("%d", &f.idade);
    fflush(stdin);
    wprintf(L" Digite o sexo do funcionário: ");
    scanf("%c", &f.sexo);
    fflush(stdin);
    wprintf(L" Digite o CPF do funcionário:");
    fgets(f.CPF,14,stdin);
    fflush(stdin);
    wprintf(L" Digite o cargo do funcionário: ");
    fgets(f.cargo,29,stdin);
    fflush(stdin);
    printf("\n   ------ Data de nascimento -----\n\n");
    printf(" Digite o dia do nacimento: ");
    scanf("%d", &f.data.dia);
    fflush(stdin);
    printf(" Digite o ano do nacimento: ");
    scanf("%d", &f.data.ano);
    fflush(stdin);
    printf(" Digite o mes do nacimento: ");
    fgets(f.data.mes, 29, stdin);
    fflush(stdin);
    f.cod = i;
    i++;
    return f;
   
}
void imprimeDados(funcionario f){
    int i=1;
    wprintf(L"\n ---------- Usuário %d ----------\n",i);
    printf("\n Cod: %d", f.cod);
    printf("\n Nome: %s",f.nome);
    printf("\n Idade: %d", f.idade);
    printf("\n Sexo: %s", f.sexo);
    printf("\n CPF: %s", f.CPF);
    printf("\n Cargo: %s", f.cargo);
    printf("\n Data nascimento: %d de %s de %d", f.data.dia, f.data.mes,f.data.ano);
    i++;
}


int main(){
    setlocale(LC_ALL,"portuguese");

    funcionario funcionarios[Tam];

    for( int i=0; i<Tam; i++){
       funcionarios[i]=ColetaDados();
    }
    for( int i=0; i<Tam; i++){
       imprimeDados(funcionarios[i]);
    }





    return 0;
}