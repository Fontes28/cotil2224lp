#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main ()
{ int f;
setlocale (LC_ALL,"Portuguese");
float total;
printf ("digite o valor total da compra: ");
scanf("%f",&total);
char forma;
printf("se for a vista digite V\n");
printf ("se for parcelado digite P\n");
printf("informe a forma de pagamento ");
scanf(" %c",&forma);
forma=toupper (forma);
if (forma=='V'){
printf ("total da compra ficou %.2f",total*0.9);
}
else
printf ("a compra não ganhará desconto:%.2f ",total);
return 0;
}
