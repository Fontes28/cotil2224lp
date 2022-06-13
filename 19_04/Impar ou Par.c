#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n;
    setlocale (LC_ALL,"portuguese");
    printf("Insira um número: \n");
    scanf("%d",&n);
    if (0==n%2)
        printf("O número é par\n");
    else
        printf ("O número é impar");

    return 0;
}
