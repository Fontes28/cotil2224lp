#include <stdio.h>
#include <stdlib.h>

int main()
{
 int c,t=0;
   for (c=1;c<=100;c++)
   {
       if (c%5==0)
           continue;
       t+=c;
   }
   printf("%d",t);
    return 0;
}
