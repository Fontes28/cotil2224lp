#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{   float n1,n2;
    char op;
    setlocale (LC_ALL,"portuguese");
    printf("Digite uma conta matem�tica (n�mero opera��o n�mero)\n");
    scanf ("%f %c %f",&n1,&op,&n2);
    switch (op) {
    case '+' : printf ("%f",n1+n2);
    break ;
    case '-' :printf ("%f",n1-n2);
    break;
    case '*': printf ("%f",n1*n2);
    break ;
    case '/':
    if (n2==0)
        printf ("N�o existe resultado");
    else
      printf ("%f",n1/n2);
      break ;
      default : printf ("A opera��o n�o � v�lida");}
    return 0;
}
