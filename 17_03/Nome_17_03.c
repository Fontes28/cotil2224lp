#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//necessário para usar o toupper
#include <locale.h>//necessário para definir idioma

    // gets = string
    /*gets = string*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char n[40],s[1];
    printf ("Escreva seu nome: ");
    gets(n);
    printf ("Qual é o seu sexo:");
    scanf ("%c",&s);
    s=toupper(s);
    setbuf (stdin,NULL);
    printf (" O seu nome é: %s /n e o seu sexo é %c",n,s);
    return 0;
}
