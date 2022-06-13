#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[40];
    float ht,v,hx,s;
    printf("Digite o numero de horas trabalhadas");
    scanf("%f",&ht);
    printf("Digite o valor da hora");
    scanf("%f",&v);
    if (ht>8){
    hx=ht-8;
    s=(ht*v)+(hx*v*1.5);
    }
        if (ht<=8){
        s=ht*s;
        }
    printf("%s trabalhou %f horas e seu salario eh %f",nome,ht,s);
    return 0;
}
