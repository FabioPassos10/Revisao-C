#include <stdio.h>
#include <stdlib.h>


int main(){
    int i=0,a=0, j=0;

printf("\n---- While() com Break ----\n");
while(i<20){
   i++;
   printf("%d \n",i);

   if(i==10){
        break;
   }
}
printf("\n---- While() com Continue ----\n");
while(a<20){
   a++;

   if(a==10){
        continue;
   }
    printf("%d \n",a);

}
printf("\n---- Do While() com Break ----\n");
do{
   j++;
   printf("%d \n",j);

   if(j==10){
        break;
   }

}while(j<20);

return 0;
}
