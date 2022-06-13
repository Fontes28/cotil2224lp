#include <stdio.h>
#include <stdlib.h>

int main()
{
      float n1,n2,n3,n4,s;
   printf ("digite quatro numeros : \n");
   scanf ("%f %f %f %f",&n1,&n2,&n3,&n4) ;
   n1=n1*n1;
   n2=n2*n2;
   n3=n3*n3;
   n4=n4*n4;
   printf ("os quadrados sao respectivamente : %f %f %f %f \n",n1,n2,n3,n4);
   printf ("A soma dos quadrados = %f",n1+n2+n3+n4);
   return 0;
}
