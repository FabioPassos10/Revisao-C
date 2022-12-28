#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define Tam 2

struct PesoIdeal{
int id;
char nome[50];
float imc;
float pesoAtual;
float altura;
float PIdeal;
char situacao[60];
};
struct PesoIdeal pesoideal[Tam];
void coletaDados(){
    for(int i=0; i<Tam; i++){
        printf("\n --------- Usuário %d ---------\n",i+1);
        printf(" Digite seu nome: ");
        fgets(pesoideal[i].nome, 49, stdin);
        fflush(stdin);
        printf(" Digite seu peso: ");
        scanf("%f", &pesoideal[i].pesoAtual);
        fflush(stdin);
        printf(" Digite sua altura em cm: ");
        scanf("%f", &pesoideal[i].altura);
        fflush(stdin);
        pesoideal[i].id = i+1;
        pesoideal[i].PIdeal = pesoideal[i].altura - 100 -((pesoideal[i].altura-150)/4);
        pesoideal[i].imc = (pesoideal[i].pesoAtual) / ((pesoideal[i].altura/100)*(pesoideal[i].altura/100));
        if (pesoideal[i].imc < 18.5) {
            strcpy(pesoideal[i].situacao, "Abaixo do Peso");

        } else if (pesoideal[i].imc > 18.4 && pesoideal[i].imc < 25) {
            strcpy(pesoideal[i].situacao, "Normal");
        } else if (pesoideal[i].imc > 24 && pesoideal[i].imc < 29.99) {
            strcpy(pesoideal[i].situacao, "Sobrepeso");
        } else{s
            strcpy(pesoideal[i].situacao, "Obesisdade");
    }
    }
}
void mostrarDado(){
    for(int i=0; i<Tam; i++){

       printf("\n --------- Usuário %d ---------\n",i+1);
       printf(" Id: %d \n", pesoideal[i].id);
       printf(" Nome: %s \n", pesoideal[i].nome);
       printf(" Peso: %.2f \n", pesoideal[i].pesoAtual);
       printf(" Altura: %.2f cm\n", pesoideal[i].altura);
       printf(" IMC: %f\n", pesoideal[i].imc);
       printf(" Seu peso ideal é: %.2f Kg\n", pesoideal[i].PIdeal);
       printf(" Situação: %s \n", pesoideal[i].situacao);

    }

}



int main(){
    setlocale(LC_ALL,"portuguese");

    coletaDados();
    system("cls");
    mostrarDado();




return 0;
}
