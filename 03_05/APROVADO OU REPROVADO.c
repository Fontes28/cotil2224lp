#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{ int ad,ra,f;
    float n1,n2,n3,rec,m,l,mf;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite o numero de aulas dadas: ");
    scanf("%d",&ad);
    l=ad*0.25;
    printf("digite o ra e o numero de faltas: \n");
    scanf("%d %d",&ra,&f);
    printf("digite as tres notas: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    m=(n1+n2+n3)/3;
    if (f>l)
    printf ("Reprovado");
    else
        if (m>=6){
        printf("aprovado");
        }
    else {
       printf("Digite a nota da recuperação: ");
        scanf ("%f",&rec);
        mf=(m+rec)/2;
        if (mf>=6)
            printf("Aprovado");
       else
        printf("Reprovado");
}
    return 0;
}
