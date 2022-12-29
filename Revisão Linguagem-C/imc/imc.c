#include "imc.h"
#include <stdio.h>
#include <stdlib.h>

void ColetaDados()
{
    for (int i = 0; i < Tam; i++)
    {
        printf(" Digite seu nome: ");
        fgets(pessoa[i].nome, 49, stdin);
        fflush(stdin);
        printf(" Digite sua altura: ");
        scanf("%f", &pessoa[i].altura);
        fflush(stdin);
        printf(" Digite seu peso: ");
        scanf("%f", &pessoa[i].peso);
        fflush(stdin);
        pessoa[i].id = i + 1;
       
    }
    
}

void IMC(Pessoa pessoa[]){
for (int i = 0; i < Tam; i++)
{
    pessoa[i].imc = (pessoa[i].peso)/(pessoa[i].altura*pessoa[i].altura);
    if(pessoa[i].imc < 15){

    }
}

}