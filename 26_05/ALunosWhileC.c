#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ra,na;
    float n1,n2,m = 0,s,nal=1;
    do
    {
        printf("RA: ");
        scanf("%d",&ra);

        if(ra == 0) {
            break;
        }

            do
            {
                printf("1a nota: ");
                scanf("%f",&n1);
            }
            while (n1>10||n1<0);
            do
            {
                 printf("2a nota: ");
                scanf("%f",&n2);
            }
            while (n2>10||n2<0);
            m=(n1+n2)/2;
            s+=m;
        printf("a media dele eh: %f\n",m);
        if (m>=6)
        {
            na++;
        }
        nal++;
    }
    while (1);

        printf ("o numero de alunos aprovados eh: %d",na);
        printf("\n a media da sala foi: %.1f",(s/nal--));
    return 0;
}
