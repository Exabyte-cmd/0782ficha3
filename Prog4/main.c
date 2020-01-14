#include <stdio.h>
#include <stdlib.h>
/*
* Programa para os dias da semana
*/
int main()
{
    int choice;

    printf("Escolha um numero de 1 a 7\n->");
        scanf("%d", &choice);

    switch(choice){
case 1:
    printf("Domingo");
    break;
case 2:
    printf("Segunda-Feira");
    break;
case 3:
    printf("Terca-feira");
    break;
case 4:
    printf("Quarta-feira");
    break;
case 5:
    printf("Quinta-feira");
    break;
case 6:
    printf("Sexta-feira");
    break;
default:
    printf("Sabado");
    break;
    }
    return 0;
}
