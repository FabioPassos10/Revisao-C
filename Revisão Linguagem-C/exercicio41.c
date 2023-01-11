#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
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
  char CPF[20];
  char cargo[30];
  int cod;
  dataNascimento data;
}funcionario;

funcionario ColetaDados(int i){
    funcionario f;
    wprintf(L"\n ---------- Usuário %d ----------\n",i+1);
    printf(" Digite seu nome: ");
    fgets(f.nome, 30, stdin);
    fflush(stdin);
    printf(" Digite sua idade: ");
    scanf("%d", &f.idade);
    wprintf(L" Digite o sexo do funcionário: ");
    scanf("%s",&f.sexo);
    fflush(stdin);
    wprintf(L" Digite o CPF do funcionário: ");
    fgets(f.CPF,20,stdin);
    fflush(stdin);
    wprintf(L" Digite o cargo do funcionário: ");
    fgets(f.cargo,30,stdin);
    fflush(stdin);
    printf("\n   ------ Data de nascimento -----\n\n");
    printf(" Digite o dia do nacimento: ");
    scanf("%d", &f.data.dia);
    fflush(stdin);
    printf(" Digite o mes do nacimento: ");
    fgets(f.data.mes, 29, stdin);
    fflush(stdin);
    printf(" Digite o ano do nacimento: ");
    scanf("%d", &f.data.ano);
    fflush(stdin);
    f.cod = i+1;
    i++;
    return f;
   
}
void imprimeDados(funcionario f, int i){
    wprintf(L"\n ---------- Usuário %d ----------\n\n",i+1);
    printf("\n Cod: %d", f.cod);
    printf("\n Nome: %s",f.nome);
    printf(" Idade: %d", f.idade);
    printf("\n Sexo: %s", f.sexo);
    printf("\n CPF: %s", f.CPF);
    printf(" Cargo: %s", f.cargo);
    wprintf(L"-------- Data nascimento --------\n");
    printf("\n Dia: %d\n",f.data.dia);
    printf(" Mes: %s",f.data.mes);
    printf(" Ano: %d", f.data.ano);
    i++;
    
}


int main(){
    setlocale(LC_ALL,"portuguese");

    funcionario funcionarios[Tam];

    for( int i=0; i<Tam; i++){
       funcionarios[i]=ColetaDados(i);
    }
    for( int i=0; i<Tam; i++){
       imprimeDados(funcionarios[i], i);
    }

    return 0;
}