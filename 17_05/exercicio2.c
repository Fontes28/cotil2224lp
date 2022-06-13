#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,s;
    printf("Informe um numero: ");
    scanf("%d",&p);
    for(s=0;s<=10;s++)
    {
        printf ("%d X %d = %d\n",p,s,(p*s));
    }
    return 0;
}
