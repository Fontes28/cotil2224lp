#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,f=1;
    printf("Digite um número");
    scanf("%d",&n);
    for (i=1;i<=n;i++);
    {
         f*= i;

    }
    printf("%d\n",f);
    return 0;
}
