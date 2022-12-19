#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void figuraQuadrdo(float lado){
 printf("\n\n");
 printf("\t\t\t+---------------------+\n");
 printf("\t\t\t|                     |\n");
 printf("\t\t\t|                     |\n");
 printf("\t\t\t|                     |\n");
 printf("\t\t\t|                     |\n");
 printf("\t\t\t|                     |L = %.2f\n",lado);
 printf("\t\t\t|                     |\n");
 printf("\t\t\t|                     |\n");
 printf("\t\t\t|                     |\n");
 printf("\t\t\t|                     |\n");
 printf("\t\t\t+---------------------+\n");
 printf("\t\t\t         L = %.2f",lado);
}
void figuraTriangulo(float lado){
 printf("\n\n");
 printf("\t\t\t                / \\ \n");
 printf("\t\t\t               /|  \\ \n");
 printf("\t\t\t              / |   \\ \n");
 printf("\t\t\t             /  |    \\ \n");
 printf("\t\t\t            /   |     \\ \n");
 printf("\t\t\t           /    |      \\ \n");
 printf("\t\t\t          /     |       \\ \n");
 printf("\t\t\t         /      |        \\ \n");
 printf("\t\t\t        /       |         \\ \n");
 printf("\t\t\t       /        |          \\ \n");
 printf("\t\t\t      /         |           \\ \n");
 printf("\t\t\t     /          |H = %.2f    \\ \n",lado);
 printf("\t\t\t    /           |             \\ \n");
 printf("\t\t\t   /            |              \\ \n");
 printf("\t\t\t  /             |               \\ \n");
 printf("\t\t\t /              |                \\ \n");
 printf("\t\t\t ---------------------------------- \n");
 printf("\t\t\t             B = %.2f                \n", lado);

}




int main()
{
 setlocale(LC_ALL, "Portuguese");
 float lado,A;


 printf("Digite o lado do quadrado: ");
 scanf("%f",&lado);

 figuraQuadrdo(lado);

 printf("\n\n\n A Area do quadrado é -> %.2f x %.2f = %.2fm²\n\n", lado,lado,lado*lado);

 figuraTriangulo(lado);
    return 0;
}
