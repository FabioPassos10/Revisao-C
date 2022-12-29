#include <stdio.h>
#include <stdlib.h>

int main(){

    float VCompra;
    int QtdDescont=1;
    int arbt, m;
    int C;
    

    printf("Digite o valor da compra:");
    scanf("%f", &VCompra);
    
    if(VCompra==500){
    QtdDescont = 1;
    }else if(VCompra>500){
    arbt = VCompra - 500;
    m = (arbt/100)+QtdDescont;
    }
    C = VCompra -((VCompra) * (m * 0.01));
    printf("\nO valor do desconto: %d", m);
    printf("\nNovo valor do produto: %d ", C);
    
    return 0;
}