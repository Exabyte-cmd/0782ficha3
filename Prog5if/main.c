#include <stdio.h>
#include <stdlib.h>
/*
*   utilização de if's
*/
int main(void)
{
    int digit1;
    int digit2;
    int digitres;
    int choice;
    printf("Calculadora\n\n1- Multiplicacao\n2- Divisao\n3- Adicao\n4-subtracao\n\nEscolha qual das opcoes deseja\n->");
        scanf("%d", &choice);
        //Multiplicação
    if(choice=1){
            printf("Insira o primeiro numero:\n->");
                scanf("%d", &digit1);
            printf("Insira o segundo digito:\n->");
                scanf("%d", &digit2);
    digitres=digit1*digit2;
    Printf("%d x %d = %d", digit1, digit2, digitres);
    }
        //Divisão
    if(choice=2){
        printf("Insira o primeiro numero:\n->");
            scanf("%d", digit1);
        printf("Insira o segundo digito:\n->");
            scanf("%d", &digit2);
    digitres=digit1/digi2;
    printf("%d / %d = %d", digit1,digit2,digitres);
    }
        //Adição
    if(choice=3){
        printf("Insira o primeiro numero:\n->");
            scanf("%d", digit1);
        printf("Insira o segundo numero:\n->");
            scanf("%d", digit2);
    digitres=digit1+digit2;
    printf("%d + %d = %d", digit1, digit2, digitres);
    }
        //subtração
    else{
        printf("Insira o primeiro numero:\n->");
            scanf("%d", digit1);
        printf("Insira o segundo numero:\n->");
            scanf("%d", digit2);
    digitres=digit1-digit2;
    printf("%d - %d = %d", digit1, digit2, digitres);
    }
}
