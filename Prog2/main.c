#include <stdio.h>
#include <stdlib.h>
/*
* Antecessor, geração atual e sucessor
*/
int main()
{
    int numb,numa,numd;

    printf("Insira o numero desejado:\n->");
        scanf("%d", &numb);
    numa=numb-1;
    numd=numb+1;
    printf("O numero desejado foi %d, o numero antecessor e o %d, e o numero sucessor e %d.", numb, numa, numd);

    return 0;
}
