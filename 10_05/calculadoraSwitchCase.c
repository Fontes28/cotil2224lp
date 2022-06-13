#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{   float n1,n2;
    char op;
    setlocale (LC_ALL,"portuguese");
    printf("Digite uma conta matemática (número operação número)\n");
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
        printf ("Não existe resultado");
    else
      printf ("%f",n1/n2);
      break ;
      default : printf ("A operação não é válida");}
    return 0;
}
