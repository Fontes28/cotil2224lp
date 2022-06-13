#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
int main()
{   float preco;
    setlocale (LC_ALL, "portuguese");
    char forma;
    printf("Insira o valor: ");
    scanf("%f",&preco);

    printf("Digite 'V' para a vista e 'P' para a prazo\n");
    scanf (" %c",&forma);
    forma=toupper (forma);
    switch(forma)
    {
        case 'V': printf("O valor com desconto será de: %.2f",preco*0.9);
        break;
        case 'P': printf("O preço continua o mesmo: %.2f",preco);
        break ;
       default : printf ("Não existe esta forma de pagamento.");
    }
    return 0;
}
