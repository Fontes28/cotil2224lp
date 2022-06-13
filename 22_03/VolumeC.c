#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,a,v,pi=3.14159;
    printf("Insira o valor do raio da lata em centimetros: ");
    scanf("%f",&r);
    printf("Insira a altura da lata: ");
    scanf("%f",&a);
    v=pi*r*r*a;
    printf("Volume da Lata = %f",v);
    return 0;
}
