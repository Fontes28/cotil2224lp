#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include  <locale.h>
int main()
{  setlocale(LC_ALL, "Portuguese");
    float a,b,c,d,R,x1,x2;
    printf("Insira os valores de A,B e C: \n");
    scanf ("%f %f %f",&a,&b,&c);
    d=(b*b)-4*a*c;
    R=sqrt (d);
    if ((a==0) || (d<0))
      printf ("N�o existe solu��o");
    else{
        x1=(-b-R)/(2*a);
        x2= (-b+R)/(2*a);
        printf ("As ra�zes s�o %f %f",x1,x2); }
    return 0;
}
