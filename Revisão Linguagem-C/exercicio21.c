#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define MAX_PESSOAS 100


typedef struct{
int codIdentificador;
int ativo;
char nome[50];
float peso;
float altura;
}Pessoa;
Pessoa pessoa[MAX_PESSOAS];

void menu(){
int op;
do{
system("cls");
printf("\t\t\t\t+-----------------------------------------+\n");
printf("\t\t\t\t|            MENU DE OPÇÕES               |\n");
printf("\t\t\t\t+-----------------------------------------+\n");
printf("\t\t\t\t|    1 - Cadastrar dados\t\t  |\n\t\t\t\t|    2 - Mostrar todos os dados\t\t  |\n\t\t\t\t|    3 - Buscar pessoa\t\t\t  |\n\t\t\t\t|    0 - Sair\t\t\t\t  |\n");
printf("\t\t\t\t+-----------------------------------------+\n");
printf("Escolha sua opção: ");
scanf("%d",&op);

switch(op){
case 1:
    getchar();
    cadastrar();
    break;
case 2:
    getchar();
    mostrar();
    break;
case 3:
    getchar();
    buscar();
    break;

default:
    printf("\n\n\nOpção Inválida!!\n\n\n");
}


}while(op!=0);
}
void buscar(){
    int cod;
    printf("Digite o CPF da pessoa: ");
    scanf("%d", &cod);
     for(int i =0; i<MAX_PESSOAS; ++i){
        if(pessoa[i].codIdentificador==cod){
        printf(" Nome:%s ",pessoa[i].nome);
        printf(" CPF:%d ",pessoa[i].codIdentificador);
        printf("Altura: %.2f \n",pessoa[i].altura);
        printf(" Peso: %.2f \n", pessoa[i].peso);
        printf("\n---------------\n");
        break;
        system("pause");
        }
    }
}


void cadastrar(){
int codindet;
char nome[50];
float peso;
float altura;

printf("Digite o nome: ");
fgets(nome,sizeof(nome),stdin);
printf("Digite um código identificador: ");
scanf("%d",&codindet);
printf("Digite o peso: ");
scanf("%f", &peso);
printf("Digite sua altura: ");
scanf("%f", &altura);


for(int i=0; i<MAX_PESSOAS; i++){

        if(pessoa[i].ativo==0){
        pessoa[i].codIdentificador = codindet;
        pessoa[i].peso = peso;
        pessoa[i].altura = altura;
        strcpy(pessoa[i].nome, nome);
        pessoa[i].ativo=1;
        break;
        }
    }
}
void mostrar(){
     printf("\t\t\t\t+-----------------------------------------+\n");
     printf("\t\t\t\t|          Pessoas Cadastradas            |\n");
     printf("\t\t\t\t+-----------------------------------------+\n");
   for(int i =0; i<MAX_PESSOAS; ++i){
        if(pessoa[i].ativo==1){
        printf(" Nome:%s\n",pessoa[i].nome);
        printf(" CPF:%d\n",pessoa[i].codIdentificador);
        printf(" Altura: %.2f \n",pessoa[i].altura);
        printf(" Peso: %.2f \n", pessoa[i].peso);
        printf("\n---------------\n");
        }
    }
    system("pause");
}

int main(){
setlocale(LC_ALL, "Portuguese");
menu();

return 0;
}
