#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,w=0,z=0,t21=0,t50=0;
    while (1)
    {
       if (i==0)
       {
           break;
       }
        printf("Digite a idade: ");
        scanf(" %d",&i);
        if (i<21)
        {
         w++;
          t21+=w;
        }
        if (i>50)
        {
            z++;
            t50+=z;
        }
    }
  printf("o total com mais de 50 = %d \n o total com menos de 21 = %d",t50,t21-1);
    return 0;
}
