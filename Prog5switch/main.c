#include <stdio.h>
#include <stdlib.h>
/*
* Utilização de Switch
*/
int main(void)
{
    int choice;
    int num1, num2, numres;

        printf("Calculadora\n\n1- Multiplicacao\n2- Divisao\n3- Adicao\n4- subtracao\n\nEscolha qual das opcoes deseja\n->");
        scanf("%d", &choice);
switch(choice){
case 1://multiplicação
    printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1*num2;
    printf("\n%d x %d = %d", num1, num2, numres);
break;
case 2://divisão
    printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1/num2;
    printf("\n%d / %d = %d", num1, num2, numres);
break;
case 3://adição
     printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1+num2;
    printf("\n%d + %d = %d", num1, num2, numres);
default://subtração
 printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1-num2;
    printf("\n%d - %d = %d", num1, num2, numres);
break;
}
}
