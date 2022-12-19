#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char nome[50];
printf("Digite seu nome: ");
fgets(nome,sizeof(nome),stdin);


printf("%s", nome);


return 0;
}
