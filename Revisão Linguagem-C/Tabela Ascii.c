#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
setlocale(LC_ALL, "portuguese");

   for(int i=0; i< 300; i++){
   printf("%d - [  %c  ]     \n", i,i);

   }
   printf("%c", 177);


    return 0;
}

