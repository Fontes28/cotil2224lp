#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    for (c=1;c<=1000000;c++)
    {
        if ((c%11==0) && (c%13==0) && (c%17==0))
            break;
    }
    printf("%d",c);
    return 0;
}
