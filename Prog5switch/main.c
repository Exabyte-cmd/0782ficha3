#include <stdio.h>
#include <stdlib.h>
/*
* Utiliza��o de Switch
*/
int main(void)
{
    int choice;
    int num1, num2, numres;

        printf("Calculadora\n\n1- Multiplicacao\n2- Divisao\n3- Adicao\n4- subtracao\n\nEscolha qual das opcoes deseja\n->");
        scanf("%d", &choice);
switch(choice){
case 1://multiplica��o
    printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1*num2;
    printf("\n%d x %d = %d", num1, num2, numres);
break;
case 2://divis�o
    printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1/num2;
    printf("\n%d / %d = %d", num1, num2, numres);
break;
case 3://adi��o
     printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1+num2;
    printf("\n%d + %d = %d", num1, num2, numres);
default://subtra��o
 printf("Insira o primeiro numero\n->");
        scanf("%d", &num1);
    printf("Insira o segundo digito\n->");
        scanf("%d", &num2);
    numres=num1-num2;
    printf("\n%d - %d = %d", num1, num2, numres);
break;
}
}
