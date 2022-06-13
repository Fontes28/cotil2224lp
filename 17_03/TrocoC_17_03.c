#include <stdio.h>
#include <stdlib.h>
//Scanf necessita do"&" antes do nome da variável

int main()
{
    float total,recebido,troco;
    printf(" digite o valor total a ser cobrado ");
    scanf("%f",&total);
    printf(" digite o valor recebido ");
    scanf("%f",&recebido);
    troco=recebido-total;
    printf("Troco = %f",troco);
    return 0;
}

int main()
{
    float total,recebido,troco;
    printf(" digite o valor total e recebido ");
    scanf("%f %f",&total,&recebido);
    troco=recebido-total;
    printf("Troco = %f",troco);
    return 0;
}

