#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mim=300,max=0,cont,s,i;
    for (cont=0;cont<10;cont++)
    {
        printf("Digite a idade");
        scanf("%d",&i);
        s+=i;
        if (max<i)
            max=i;
        if(mim>i)
            mim=i;
    }
    printf("media: %d",(s/10));
    printf("soma: %d",s);
    printf("maior: %d",max);
    printf("menor: %d",mim);

    return 0;
}
