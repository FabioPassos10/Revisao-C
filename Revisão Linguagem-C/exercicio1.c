#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor2);
    if(valor2 == valor1){

        do{ 
         system("cls");
         printf("\nPor favor, digite um valor diferente ...\n\n");
         printf("Digite o primeiro valor: ");
         scanf("%d", &valor2);

        }while(valor2 == valor1);

    }else if(valor1 > valor2){
    printf("O Maior valor eh: %d", valor1);
    }else{
    printf("O Maior valor eh: %d", valor2);
    }

return 0;
}
