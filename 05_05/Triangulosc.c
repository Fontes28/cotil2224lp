#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{ float x,y,z;
 setlocale (LC_ALL, "Portuguese");
    printf("Insira os lados x,y e z do pol�gono: \n");
    scanf ("%f %f %f",&x,&y,&z);

    if ((x>y+z)&&(y>x+z)&&(z>x+y))

     if ((x==z) && (z==y))
        printf ("o triangulo � equilatero ");
        else
            if ((x==y) || (y==z) || (x==z))
            printf("O tri�ngulo � is�sceles");
            else
                printf("o triangulo � escaleno");

    else
       printf ("N�o existe triangulo");


    return 0;
}
