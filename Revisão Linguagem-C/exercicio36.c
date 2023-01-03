#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int cod,ano,anoIngre;

int DescobreIdade(int ano){
 int IdadeTrab;
 IdadeTrab = 2022 - ano;
 return IdadeTrab;
}
int TempoTrabalho(int a){
int TempT;
TempT = 2022 - a;
return TempT;
}
int ConsultaAposentadoria(int tempoT, int idade){
    setlocale(LC_ALL, "portuguese");
   if(idade >=65){
    printf("\n Requer aposentadoria\n");
   } else if(tempoT >=30){
    printf("\n Requer aposentadoria\n");
   }else if(idade >=60 && tempoT>=25){
    printf("\n Requer aposentadoria\n");
   }else{
    wprintf(L"\n Não requer aposentadoria\n");
   }

}

void Coletadados(){
    int Ttrab, idadeT;
    wprintf(L" Digite seu código: ");
    scanf("%d", &cod);
    printf(" Digite o ano do seu nascimento: ");
    scanf("%d", &ano);
    printf(" Digite o ano de ingresso na empresa: ");
    scanf("%d", &anoIngre);
    Ttrab = TempoTrabalho(anoIngre);
    idadeT = DescobreIdade(ano);
    
    wprintf(L"\n Código: %d", cod);
    printf("\n Idade do trabalhador: %d", idadeT);
    printf("\n Tempo de trabalho: %d ", Ttrab);
    ConsultaAposentadoria(Ttrab, idadeT);


}


int main(){
    setlocale(LC_ALL, "portuguese");
    Coletadados();

    return 0;
}