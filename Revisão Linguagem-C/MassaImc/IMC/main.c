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

    printf("\n Deseja a tabuada de um n�mero expec�fico ou de todos os n�meros? ");
    printf("\n   1 - N�mero expecifico      | 2 - Todos os n�meros \n\n   --> ");
    scanf("%d", &op);
    if(op==1){
            printf("    Digite o n�mero da tabuada: ");
            scanf("%d", &n);
      Tabuada(n);
    }else{
       TodosOsnTabuada();
    }

    return 0;
}
