#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int quantidade;
    float total;


    printf ("Quantidade de ma��s: ");
    scanf  ("%d", &quantidade);

    if (quantidade>=12)
    {
        total=quantidade*0.25;
        printf ("O total da compra �: R$ %.2f", total);
    }
    else
    {
        total=quantidade*0.30;
        printf ("O total da compra �: R$ %.2f", total);
    }

}
