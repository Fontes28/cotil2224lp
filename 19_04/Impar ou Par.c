#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n;
    setlocale (LC_ALL,"portuguese");
    printf("Insira um n�mero: \n");
    scanf("%d",&n);
    if (0==n%2)
        printf("O n�mero � par\n");
    else
        printf ("O n�mero � impar");

    return 0;
}
