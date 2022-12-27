#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

#define QtdP 20


struct pessoa{
int id;
char nome[50];
int idade;
float peso;
float altura;
float Imc;
char situacao[60];

};
struct pessoa Pessoa[QtdP];
void ColetaDados(){
    for(int i=0;i<QtdP;i++){
    printf("\n ---------- Usuário %d ---------- \n",i+1);
    printf("Digite seu nome: ");
    fgets(Pessoa[i].nome, 50, stdin);
    fflush(stdin);
    printf("Digite sua idade: ");
    scanf("%d", &Pessoa[i].idade);
    printf("Digite seu peso: ");
    scanf("%f", &Pessoa[i].peso);
    fflush(stdin);
    printf("Digite sua altura: ");
    scanf("%f", &Pessoa[i].altura);
    fflush(stdin);
    Pessoa[i].Imc = (Pessoa[i].peso)/(Pessoa[i].altura*Pessoa[i].altura);
    if(Pessoa[i].Imc<18.5){
        strcpy(Pessoa[i].situacao, " Abaixo do peso");
    }else if(Pessoa[i].Imc>18.4 && Pessoa[i].Imc<25){
        strcpy(Pessoa[i].situacao, " Peso normal");

    }else if(Pessoa[i].Imc>24 && Pessoa[i].Imc<30){
        strcpy(Pessoa[i].situacao, " Sobrepeso");

    }else if(Pessoa[i].Imc>29){
        strcpy(Pessoa[i].situacao, " Obesidade");
    }
    Pessoa[i].id=i+1;
    }
}
void ExibeDados(){
    for(int i=0; i<QtdP; i++){
     printf("\n ---------- Usuário %d ---------- \n",i+1);
     printf("Id: %d\n", Pessoa[i].id);
     printf("Nome: %s",Pessoa[i].nome);
     printf("Idade: %d\n", Pessoa[i].idade);
     printf("Peso: %.2f\n",Pessoa[i].peso);
     printf("Seu Imc é: %.4f\n", Pessoa[i].Imc);
     printf("Situação: %s\n", Pessoa[i].situacao);


    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    system("title Coleta de dados");

    ColetaDados();
    system("cls");
    system("title Exibição dos Dados");
    ExibeDados();

return 0;
}
