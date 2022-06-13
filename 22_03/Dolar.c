#include <stdio.h>
#include <stdlib.h>
int main()
{float d,v,vr;
    printf("Insira o valor do Dolar atual: ");
    scanf("%f",&d);

    printf("Insira o valor em dolares: ");
    scanf("%f",&v);
    vr=v*d;
    printf("O valor em reais = %f \n",vr);
    return 0;


}
