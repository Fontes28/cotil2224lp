#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float r,d,l;
    setlocale(LC_ALL,"PORTUGUESE");
    printf("Insira as informações abaixo\n");
    printf("Insira a receita da empresa: ");
    scanf("%f",&r);
    printf("Insira a despesa da empresa: ");
    scanf("%f",&d);
    l=r-d;
    printf("O lucro foi de %f",l);
    return 0;
}
