#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX_ALUNOS 50

typedef struct{
char nome[50];
float nota[4];
int ativo;

} Aluno;

Aluno alunos[MAX_ALUNOS];


void menu(){ //menu <-------------

int op;
do{
   system("cls");
   printf("\n1 - Cadastrar aluno\n2 - Remover aluno\n3 - Alunos reprovados\n4 - Pesquisar aluno\n5 - Listar todos os alunos\n6 - Sair\n");
   scanf("%d",&op);
   getchar();
   switch(op){
   case 1:
       cadastrar();

       break;
   case 2:
       remover();

       break;
   case 3:
       reprovados();

       break;
   case 4:
       pesquisar();

       break;
   case 5:
       return 0;


   case 6:
       return 0;

       break;
   }

}while(op !=0);


}

void cadastrar(){//Função Cadastro <-------------
system("cls");
char nome[50];
float nota[4];
int op;
do{

    printf("Nome do aluno(a): ");
    fgets(nome,sizeof(nome),stdin);
    printf("1 - Bimestre: ");
    scanf("%f", &nota[0]);
    printf("2 - Bimestre: ");
    scanf("%f", &nota[1]);
    printf("3 - Bimestre: ");
    scanf("%f", &nota[2]);
    printf("4 - Bimestre: ");
    scanf("%f", &nota[3]);

    for(int i =0; i<MAX_ALUNOS; ++i){

        if(alunos[i].ativo==0){
        alunos[i].nota[0] = nota[0];
        alunos[i].nota[1] = nota[1];
        alunos[i].nota[2] = nota[2];
        alunos[i].nota[3] = nota[3];
        strcpy(alunos[i].nome, nome);
        break;
        }
    }

    printf("\n1- Continiar | 0 - Sair \n");
    scanf("%d", &op);
}  while(op !=0);


}
void remover(){

}
void reprovados(){

}
void pesquisar(){

}
void listar(){

}


int main()
{
   menu();


    return 0;
}
