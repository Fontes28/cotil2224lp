#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,l,c;
    printf("Para calcular o consumo medio do automovel, insira os valores abaixo\n");
    printf("Kilometragem: ");
    scanf("%f",&k);
    printf("Litros consumidos: ");
    scanf("%f",&l);
    c=k/l;
    printf("O consumo medio foi de: %f kilometros por litro",c);
    return 0;
}
