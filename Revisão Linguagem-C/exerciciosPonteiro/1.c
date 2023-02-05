#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, *A, *B;
    A = &a;
    B = &b;
    printf(" valor A: %d\n", A);
    printf(" valor de B: %d", B);
    if (A > B)
    {
        printf("\n 'A' eh maior com endereco: %d", A);
    }
    else
    {
        printf("\n 'B' eh maior com endereco: %d", B);
    }
 
    return 0;
}