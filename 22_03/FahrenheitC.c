#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,c;
    printf("Insira os valores abaixo\n");
    printf("Temperatura em Celcius: ");
    scanf("%f",&c);
    f=(9*c+160)/5;
    printf("A temperatura em Fahrenheit = %f",f);

    return 0;
}
