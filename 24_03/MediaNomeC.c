#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[40];
    float n1,n2,n3,m;
    printf("Insira os dados abaixo para que se calcule a media do aluno\n");
    printf("Insira o nome do aluno(a): ");
    gets (nome);
    setbuf (stdin , NULL);
    printf("Insira as notas do aluno(a): ");
    scanf("%f %f %f",&n1,&n2,&n3);
    m=(n1+n2+n3)/3;
    printf("A media do aluno(a) %s eh %f",nome,m);
    return 0;
}
