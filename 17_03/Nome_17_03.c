#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//necess�rio para usar o toupper
#include <locale.h>//necess�rio para definir idioma

    // gets = string
    /*gets = string*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char n[40],s[1];
    printf ("Escreva seu nome: ");
    gets(n);
    printf ("Qual � o seu sexo:");
    scanf ("%c",&s);
    s=toupper(s);
    setbuf (stdin,NULL);
    printf (" O seu nome �: %s /n e o seu sexo � %c",n,s);
    return 0;
}
