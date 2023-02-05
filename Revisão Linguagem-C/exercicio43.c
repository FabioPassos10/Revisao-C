#include <stdio.h>
#include <stdlib.h>

//-------------- Ponteiros -------------- 

int main(){
    int idade=20;
    int *I;
    I = &idade;

    printf("Endereco: %d \n",I);
    printf("A idade eh: %d \n",*I);


    int a = 5, b=8;
    int *Pa = &a, *Pb = &b;
    
    

    return 0;
}