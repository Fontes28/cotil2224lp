#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{ float x,y,z;
 setlocale (LC_ALL, "Portuguese");
    printf("Insira os lados x,y e z do polígono: \n");
    scanf ("%f %f %f",&x,&y,&z);

    if ((x>y+z)&&(y>x+z)&&(z>x+y))

     if ((x==z) && (z==y))
        printf ("o triangulo é equilatero ");
        else
            if ((x==y) || (y==z) || (x==z))
            printf("O triângulo é isósceles");
            else
                printf("o triangulo é escaleno");

    else
       printf ("Não existe triangulo");


    return 0;
}
