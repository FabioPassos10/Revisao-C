#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 3, *PonteiroN; //declaração
    PonteiroN = &numero;
    *PonteiroN = 4;
    numero = 5;
    numero = 9;
    printf("valor de n: %d", *PonteiroN);
    
    return 0;
}