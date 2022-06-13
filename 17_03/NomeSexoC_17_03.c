#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char sexo,nome[40];
    printf("digite seu sexo: ");
    scanf ("%c",&sexo);
    sexo=toupper(sexo);
    printf ("digite seu nome: ");
    setbuf (stdin,NULL);
    gets(nome);
    printf("Seu nome é: %s\n",nome);
    printf("Seu sexo é: %c\n",sexo);
    return 0;
}
