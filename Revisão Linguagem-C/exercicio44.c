#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL,"portuguese");

typedef struct Horas{
int hora;
int min;
int sec;
};
struct Horas horario, *Horario;
Horario = &horario;
Horario->hora = 01;
Horario->min = 30;
Horario->sec = 15;
printf("\n\n %d:%d:%d\n\n",Horario->hora,Horario->min,Horario->sec);

printf("\n Digite as Horas: ");
do{
scanf("%d", &Horario->hora);
if(Horario->hora>24){
    wprintf(L"\n O valor informado está incorreto \n");
    system("pause");
    system("cls");
    printf("\n Digite novamente as Horas: ");
}
}while(Horario->hora>24);

printf("\n Digite os minutos: ");
do{
scanf("%d", &Horario->min);
if(Horario->min>59){
    wprintf(L"\n O valor informado está incorreto \n");
    system("pause");
    system("cls");
    printf("\n Digite novamente os minutos: ");
}
}while(Horario->min>59);
printf("\n Digite os segundos: ");
do{

scanf("%d", &Horario->sec);
if(Horario->sec>60){
    wprintf(L"\n O valor informado está incorreto \n");
    system("pause");
    system("cls");
    printf("\n Digite novamente os segundos: ");
}
}while(Horario->sec>60);

printf("\n\n %d:%d:%d\n\n",Horario->hora,Horario->min,Horario->sec);






    return 0;
}