#include <stdio.h>
#include <stdlib.h>
/*
*Claro, quem não gosta de prémios?
*/
int main()
{
    double prize=500000;
    double prizef;
    double prizes;
    double prizet;
    double first=0.46;
    double second=0.32;
    double third=0.22;

    prizef= prize*first;
    prizes= prize*second;
    prizet= prize*third;

    printf("O primeiro lugar recebera %0.2lf euros, o segundo recebera %0.2lf euros e o terceiro recebera %0.2lf euros. Totalizando %0.2lf euros.\n", prizef, prizes, prizet, prize);

    return 0;
}
