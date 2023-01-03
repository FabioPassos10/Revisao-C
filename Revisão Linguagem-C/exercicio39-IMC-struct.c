#include <stdio.h>
#include <stdlib.h>
#define Tam 2 // tamanho do vetor

typedef struct 
{
int id;
float peso;
float altura;
float imc;
}ImcP;

ImcP LerInfo(){// função que coleta os dados
    ImcP p;
    int i=1;
    printf("\n ---------- Usuario %d ---------- \n",i);
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

void imprimeP(ImcP p){// função que imprime as informações cadastradas
    int i=1;
    printf("\n ---------- Usuario %d ---------- \n",i);
    printf(" \n Id: %d",p.id);
    printf(" \n Peso: %.2f", p.peso);
    printf(" \n Altura: %.2f",p.altura);
    printf(" \n IMC: %.5f\n",p.imc);
    i++;
}
void buscar(ImcP p){
    int n=0;
    system("cls");
    printf(" \n Digite o numero do id: ");
    scanf("%d",&n);
    if(p.id==n){

    int i=1;
    printf("\n ---------- Usuario %d ---------- \n",i);
    printf(" \n Id: %d",p.id);
    printf(" \n Peso: %.2f", p.peso);
    printf(" \n Altura: %.2f",p.altura);
    printf(" \n IMC: %.5f\n",p.imc);
    i++;

    }
}


int main(){
    ImcP pessoas[Tam];
    for (int i = 0; i < Tam; i++)
    {
       pessoas[i] = LerInfo();
    }
    for (int i = 0; i < Tam; i++)
    {
    imprimeP(pessoas[i]);
    }
    for (int i = 0; i < Tam; i++)
    {
    buscar(pessoas[i]);
    }



    return 0;
}