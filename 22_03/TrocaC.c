#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x;
    printf("Insira o valor de a: ");
    scanf("%f",&a);
    printf("Insira o valor de b: ");
    scanf("%f",&b);
    x=a;
    a=b;
    b=x;
    printf("O valor de 'a' eh %f e o valor de b eh %f",a,b);
    return 0;
}
