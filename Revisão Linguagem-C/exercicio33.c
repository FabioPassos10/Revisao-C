#include <stdio.h>
#include <stdlib.h>

int Tabuada(int n){
for(int i=0;i<11;i++){
    printf("%d x %d = %d\n", n,i,n*i);
}
}

int main (){
    int n;
    printf("Digite o numero da tabuada: ");
    scanf("%d", &n);
    Tabuada(n);

return 0;
}
