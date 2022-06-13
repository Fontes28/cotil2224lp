#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,ia,id,ih,im,is;
    printf("Em que ano estamos: ");
    scanf("%d",&a);
    printf("Digite o ano em que voce nasceu: ");
    scanf("%d",&n);
    ia=a-n;
    id=ia*365;
    ih=id*24;
    im=ih*60;
    is=im*60;
    printf("A sua idade em anos = %d\n",ia);
    printf("A sua idade em dias = %d\n",id);
    printf("A sua idade em horas = %d\n",ih);
    printf("A sua idade em minutos = %d\n",im);
    printf("A sua idade em segundos = %d\n",is);

    return 0;
}
