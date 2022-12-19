#include <stdio.h>
#include <stdlib.h>


char alteraNome(int n, char *nome){
    for(int i = 0; i<n; i++){
      printf("Digite o novo nome: ");
      scanf("%s",&nome[i]);
    }
   for(int i=0;i<3;i++){
    printf("[ %s ] ", nome[i]);
}

}

int main(){
char nome[3][50], Nnome[3][50];
int n=0;
for(int i=0; i<3;i++){

    printf("Digite o %d nome: ",i+1);
    scanf("%s", nome[i]);
}
printf("Digite a posicao que deseja alterar: ");
scanf("%d",&n);
alteraNome(n,nome);


return 0;
}
