#include <stdio.h>
#include <stdlib.h>

//2. Escreva	 um	 programa	 para	 ler	 o	 ano	 de	 nascimento	 de	 uma	 pessoa	 e
//escrever	 uma	 mensagem	 que	 diga	 se	 ela	 poderá	 ou	 não	 votar	 este	 ano
//(não	é	necessário	considerar	o	mês	em	que	ela	nasceu).

int main(){
int ano, resp;

printf(" Digite o ano do seu nascimento: ");
scanf("%d", &ano);
resp = 2022 - ano;

if(resp >= 18){
    printf("\n\tVoce vai votar esse ano. \n");
}else{
    printf("\n\tVoce nao vai votar esse ano. \n");
}
return 0;
}
