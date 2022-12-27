#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define Tam 3

struct pessoa{
int id;
char nome[50];
int idade;
float peso;
float altura;
float imc;
char situacao[60];
};

struct pessoa Pessoa[Tam];

void ColetaDados(){
    for(int i=0; i<Tam; i++){
    printf("\n ---------- Usuário %d ---------- \n",i+1);
    printf("Digite seu nome: ");
    //scanf("%49[^\n]s", &Pessoa[i].nome);//Scanf Aprimorado
    fgets(Pessoa[i].nome,49, stdin);
    fflush(stdin);
    printf("Digite sua idade: ");
    scanf("%d", &Pessoa[i].idade);
    printf("Digite seu peso: ");
    scanf("%f", &Pessoa[i].peso);
    fflush(stdin);
    printf("Digite sua altura: ");
    scanf("%f", &Pessoa[i].altura);
    fflush(stdin);
    Pessoa[i].id = i+1;
    Pessoa[i].imc = (Pessoa[i].peso)/(Pessoa[i].altura*Pessoa[i].altura);
    if(Pessoa[i].imc<18.5){
        strcpy(Pessoa[i].situacao, " Abaixo do Peso");
    }else if(Pessoa[i].imc>18.4 && Pessoa[i].imc < 25){
        strcpy(Pessoa[i].situacao, " Normal");
    }else if(Pessoa[i].imc>24 && Pessoa[i].imc < 29.99){
        strcpy(Pessoa[i].situacao, " Sobrepeso");
    }else{
       strcpy(Pessoa[i].situacao, " Obesidade");
    }
    }
}

void ExibeDados(){
    for(int i=0; i<Tam; i++){
     printf("\n ---------- Usuário %d ---------- \n",i+1);
     printf(" Id: %d \n", Pessoa[i].id);
     printf(" Nome: %s \n", Pessoa[i].nome);
     printf(" Idade: %d \n", Pessoa[i].idade);
     printf(" Peso: %.2f Kg \n",Pessoa[i].peso);
     printf(" Altura: %.2f m \n",Pessoa[i].altura);
     printf("\n Imc: %f\n", Pessoa[i].imc);
     printf(" Situação: %s",Pessoa[i].situacao);

    }
}

void BuscarPessoa(){
    int Cod;
    printf(" Digite o Id da pessoa que deseja encontrar: ");
    scanf("%d", &Cod);
    for(int i=0; i<Tam; i++){
     if(Pessoa[i].id==Cod){
     printf("\n ---------- Usuário %d ---------- \n",i+1);
     printf(" Id: %d \n", Pessoa[i].id);
     printf(" Nome: %s \n", Pessoa[i].nome);
     printf(" Idade: %d \n", Pessoa[i].idade);
     printf(" Peso: %.2f Kg \n",Pessoa[i].peso);
     printf(" Altura: %.2f m \n",Pessoa[i].altura);
     printf("\n Imc: %f\n", Pessoa[i].imc);
     printf(" Situação: %s",Pessoa[i].situacao);
     }
    }
}

int main(){
    setlocale(LC_ALL,"portuguese");
    system("title Coletando dados");
    ColetaDados();
    system("cls");
    system("title Dados cadastrados");
    ExibeDados();
    printf("\n");
    system("pause");
    system("cls");
    BuscarPessoa();




return 0;
}
