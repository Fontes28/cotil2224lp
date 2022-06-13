#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float i,f,p;
    printf("Insira  a quilometragem inicial do carro: ");
    scanf("%f",&i);
    printf("Insira a quilometragem final do carro: ");
    scanf("%f",&f);
    p=f-i;
    printf("A distancia percorrida foi de: %f km",p);
    return 0;
}
