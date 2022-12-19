#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int mat[3][3],vet[3],soma[3],som=0,n;

    for(int i = 0; i<3; i++){
            for(int j=0; j<3;j++){
               mat[i][j]= rand()%10;
            }
    }
    for(int i = 0; i<3; i++){
            for(int j=0; j<3;j++){
               printf("[ %d ]  ",mat[i][j]);
            }
            printf("\n");
    }
    printf("\n================\n\n");
    printf("Digite o numero da coluna que deseja: ");
    scanf("%d",&n);
    for(int i=0; i<3;i++){
        for(int j = n; j<3;j++){
          som+= mat[i][n];
        }
    }
    printf("\n A soma eh: %d", som);



return 0;
}
