#include <stdio.h>
#include <stdlib.h>

float media(int n, float *nota){
float soma=0,m=0;
for(int i = 0; i< n; i++){
   soma +=nota[i];
}
m = soma / n;


return m;
}


int main(){
  float nota[5],med;

  for(int i=0; i<5;i++){
    printf("Digite a %d nota: ",i+1);
    scanf("%f", &nota[i]);
  }
  med = media(5,nota);
  printf("\n\n A media eh: %f",med);


return 0;
}



