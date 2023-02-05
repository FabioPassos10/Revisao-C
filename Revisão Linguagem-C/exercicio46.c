#include <stdio.h>
#include <stdlib.h>



int main(){
    int num=2, *n;
    n = &num;

    printf(" num: %d\n", num);
    printf(" endereco: %d", *n);

    


    return 0;
}