#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include "imc.h"

int main()
{
    setlocale(LC_ALL,"portuguese");
    system("title Tabuada");
    Logo();
    int n, op;

    printf("\n Deseja a tabuada de um número expecífico ou de todos os números? ");
    printf("\n   1 - Número expecifico      | 2 - Todos os números \n\n   --> ");
    scanf("%d", &op);
    if(op==1){
            printf("    Digite o número da tabuada: ");
            scanf("%d", &n);
      Tabuada(n);
    }else{
       TodosOsnTabuada();
    }

    return 0;
}
