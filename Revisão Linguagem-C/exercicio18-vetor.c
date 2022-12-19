#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//Faça um programa que verifique e mostre os números entre 1.000 e 2.000 (inclusive) que,
// quando divididos por 11 produzam resto igual a 2.


int main()
{
    for(int i=1000; i<2001; i++){
        if(i%11==2){
            printf("%d\n", i);
        }
    }

    return 0;
}
