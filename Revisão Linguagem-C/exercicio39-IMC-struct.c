#include <stdio.h>
#include <stdlib.h>
#define Tam 2 // tamanho do vetor

typedef struct 
{
char nome[50];
int id;
float peso;
float altura;
float imc;
}ImcP;

ImcP LerInfo(int i){// função que coleta os dados
    ImcP p;
    printf("\n ---------- Usuario %d ---------- \n",i+1);
    printf(" Digite seu nome: ");
    fgets(p.nome, 49, stdin);
    fflush(stdin);
    printf(" Digite seu peso: ");
    scanf("%f", &p.peso);
    fflush(stdin);
    printf(" Digite sua altura: ");
    scanf("%f", &p.altura);
    fflush(stdin);
    p.id = i;
    p.imc = (p.peso)/(p.altura*p.altura);
    i++;
    return p;
}

void imprimeP(ImcP p, int i){// função que imprime as informações cadastradas
   
    printf("\n ---------- Usuario %d ---------- \n",i+1);
    printf(" Nome: %s", p.nome);
    printf(" Id: %d",p.id);
    printf(" \nPeso: %.2f", p.peso);
    printf(" \nAltura: %.2f",p.altura);
    printf(" \nIMC: %.5f\n\n\n\n",p.imc);
   
  
}
void buscar(ImcP *pP, int i){
    int n=0;
    system("pause");
    system("cls");
    printf(" \n Digite o numero do id: ");
    scanf("%d",&n);
    fflush(stdin);
    if(pP->id==n){
    printf("\n ---------- Usuario %d ---------- \n",i+1);
    printf(" Nome: %s", pP->nome);
    printf(" Id: %d",pP->id);
    printf(" \nPeso: %.2f", pP->peso);
    printf(" \nAltura: %.2f",pP->altura);
    printf(" \nIMC: %.5f\n",pP->imc);
    }
}
void Alterar(ImcP *pP, int i){
    int Num=0;
    printf("\n     Alteracao de dados      \n ");
    system("pause");
    system("cls");
    printf(" \n Digite o numero do id: ");
    scanf("%d",&Num);
    fflush(stdin);
    if(pP->id==Num){
    printf("\n ---------- Usuario %d ---------- \n",i+1);
    printf(" Nome: %s", pP->nome);
    printf(" Id: %d",pP->id);
    printf(" \nPeso: %.2f", pP->peso);
    printf(" \nAltura: %.2f",pP->altura);
    printf(" \nIMC: %.5f\n",pP->imc);

    printf("\n\n+---------------------------------+\n");
    printf("|             ALTERANDO           |\n");
    printf("+---------------------------------+\n\n");
    printf(" Nome: ");
    fgets(pP->nome, 49, stdin);
    fflush(stdin);
    printf(" Peso: ");
    scanf("%f", &pP->peso);
    fflush(stdin);
    printf(" Altura: ");
    scanf("%f", &pP->altura);
    fflush(stdin);
    pP->imc = (pP->peso)/(pP->altura*pP->altura);

    }

}


int main(){
    ImcP pessoas[Tam], *pP;
    pP = &pessoas;
    for (int i = 0; i < Tam; i++)
    {
       pessoas[i] = LerInfo(i);
    }
    for (int i = 0; i < Tam; i++)
    {
    imprimeP(pessoas[i], i);
    }
    for (int i = 0; i < Tam; i++)
    {
    buscar(pP,i);
    }
    for (int i = 0; i < Tam; i++)
    {
    Alterar(pP,i);
    }



    return 0;
}