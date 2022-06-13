#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n,f=1;
    do
    {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d",&n);

    }
        while (n<0);
    while (i<=n)
    {
        f=f*i;
        i++;
    }
    printf("fatorial = %d\n",f);
    return 0;
}
