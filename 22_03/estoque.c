#include <stdio.h>
#include <stdlib.h>

int main()
{ int QM,QN;
 float EM;
    printf("Digite o valor da quantidade minima de estoque \n");
    scanf ("%d",&QN);
    printf ("Agora digite o valor da quantidade maxima :");
    scanf ("%d",&QM);
    EM=(QM+QN)/2;
    printf ("estoque medio = %f",EM);
    return 0;
}
