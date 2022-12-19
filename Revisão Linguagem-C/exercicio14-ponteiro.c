#include <stdio.h>
#include <stdlib.h>


void alteraNome(int n, char *nome){
    for(int i = n; i<3; i++){
      printf("Digite o novo nome: ");
      scanf("%s",nome[i]);
    }
}

int main(){
char nome[3][50];
int n;
for(int i=0; i<3;i++){

    printf("Digite o %d nome: ",i+1);
    scanf("%s", nome[i]);
}
printf("Digite a posicao que deseja alterar: ");
scanf("%d",&n);
alteraNome(n,nome);



return 0;
}
