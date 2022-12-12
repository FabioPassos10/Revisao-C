#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main ()
{

    setlocale(LC_ALL, "Portuguese");

    int A,B,C;
    printf (" - ESCREVER 3 VALORES EM ORDEM CRESCENTE - \n\n");

    printf ("Digite o primeiro valor: \n");
    scanf  ("%d", &A);

    printf ("Digite o segundo valor: \n");
    scanf  ("%d", &B);

    printf ("Digite o terceiro valor: \n");
    scanf  ("%d", &C);

    if (A<B && B<C)
    {
        printf ("%d - %d - %d", A,B,C);
    }
    else if (B<A && C<A && B<C)
    {
        printf ("%d - %d - %d", C,B,A);
    }
    else if (C<A && A<B)
    {
        printf ("%d - %d - %d", C,A,B);
    }
    else if (B<A && A<C)
    {
        printf ("%d - %d - %d", B,A,C);
    }
    else if (A<C && C<B)
    {
        printf ("%d - %d - %d", A,C,B);
    }
    else
    {
        printf ("%d - %d - %d", C,B,A);
    }
    return 0;
}
