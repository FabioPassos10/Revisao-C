#include <stdio.h>
#include <stdlib.h>

int main()
{
int velocidade, velPerc,n;
printf("Digite a velocidade da via: ");
scanf("%d", &velocidade);
printf("Digite a velocidade em que seu veiculo percorria a via: ");
scanf("%d", &velPerc);

if(velPerc>velocidade){
    n=velPerc-velocidade;

    printf("O valor da multa eh: R$ %d,00", n*5);

}else{
printf("\nNao ha multas a serem pagas...");
}
    return 0;
}
