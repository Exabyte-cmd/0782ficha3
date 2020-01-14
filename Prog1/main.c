#include <stdio.h>
#include <stdlib.h>
/*
* Conversões entre fahrenheit para celcius
*/
int main()
{
    double fahrenheit, celcius;

    printf("Insira a temperatura em fahrenheit:\n->");
        scanf("%lf", &fahrenheit);
    celcius=fahrenheit/33.8;
    printf("A temperatura de %0.2lf em fahrenheit e de %0.2lf graus Celcius.", fahrenheit, celcius);

    return 0;
}
