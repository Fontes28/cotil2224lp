#include <stdio.h>
#include <stdlib.h>

int main()
{int RA,a,n;
float m,n1,n2,t;
for (n=0;n<10;n++)
{
    printf("RA: ");
    scanf("%d",&RA);
    printf("2 notas: ");
    scanf("%f %f",&n1,&n2);
    m=(n1+n2)/2;
    t=t+m;
    if (m>=6){
    a++;
    }
}
    printf("%d aprovados",a);
    printf("\n a media da sala foi %f",t/10);
    return 0;
}
