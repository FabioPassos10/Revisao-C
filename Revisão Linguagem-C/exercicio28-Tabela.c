#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define Tam 50

void CriaMenuLinhaSuperior(){// essa função cria a linha superior do menu
int i;

printf("\t%c", 201);
for(i =0; i<Tam; i++){
    printf("%c", 205);
}
printf("%c\n", 187);
}

void CriaLinhaRodape(int tamanho){// essa função cria a linha inferior do menu
int i;

printf("\t%c", 200);
for(i =0; i<Tam; i++){
    printf("%c", 205);
}
printf("%c\n", 188);
}

void criaItem(int tamanho, char str[]){
int i, contaLetra=0;

for(i =0; i<tamanho; i++){
    contaLetra=strlen(str);
}
printf("\t%c", 186);

printf("%s", str);
while(contaLetra<Tam){
    printf("%c", 32);
    contaLetra++;
}
printf("%c\n", 186);
}

void montaMenu(char nome[]){
 CriaMenuLinhaSuperior();
 criaItem(Tam, nome);
 CriaLinhaRodape(Tam);

}


int main()
{

    int nome[Tam];
    printf("Digite o seu nome: ");
    scanf("%49[^\n]s", nome);
    montaMenu(nome);

    return 0;
}

