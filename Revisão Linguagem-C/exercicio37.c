#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float pesoMaca, pessoMor;   //Peso da maça e morango

float precoMorango(float pessoMor){// Calcula o preço do Morango
float NpreocMorango;
if(pessoMor<5){
NpreocMorango = pessoMor * 2.50;
}else{
NpreocMorango = pessoMor * 2.20;
}
if(pessoMor>8||NpreocMorango>25){
   NpreocMorango-=(NpreocMorango) * (10/100) ;
}
return NpreocMorango; 
}


float precoMaca(float pesoMac){// Calcula o preço da maça
float nPrecoMaca;
if(pesoMac<5){
nPrecoMaca = pesoMac * 1.80;
if(pesoMac>8||nPrecoMaca>25){
   nPrecoMaca-=(nPrecoMaca) * (10/100) ;
}
}else{
  nPrecoMaca = pesoMac * 1.50;  
  if(pesoMac>8||nPrecoMaca>25){
   nPrecoMaca-=(nPrecoMaca) * (10/100) ;
}
}

return nPrecoMaca;
}

float  QtdComprada(){
    float Morango, Maca;
    wprintf(L" Digite a quantidade de Maça em (kg): ");
    scanf("%f", &pesoMaca);
    fflush(stdin);

    wprintf(L" Digite a quantidade de Morango em (kg): ");
    scanf("%f", &pessoMor);
    fflush(stdin);
    Morango = precoMorango(pessoMor);
    Maca = precoMaca(pesoMaca);
    wprintf(L"\n\n Preço morango: %.2f", Morango);
    wprintf(L"\n Preço Maça: %.2f",Maca);
    
    
}






int main(){
    setlocale(LC_ALL,"portuguese");
    QtdComprada();


    return 0;
}