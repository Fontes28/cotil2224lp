#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cv[40],cp[40];
    int q;
    float p,c;
    printf("Digite o codigo do vendedor: ");
    scanf("%s",&cv);
    printf("digite o codigo do produto vendido: ");
    scanf("%s",&cp);
    printf("Digite o valor individual do produto");
    scanf("%f",&p);
    printf("Digite a quantidade vendida: ");
    scanf("%d",&q);
    c=(q*p)*0.05;
    printf("O valor da comissao = %f\n",c);

    return 0;
}
