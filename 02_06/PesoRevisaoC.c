#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Compiler version gcc  6.3.0

int main()
{
  int i=0,ch=0,cm=0;
  float p=0,pesoh=0,iddm=0;
  char sexo='M';
  while(1)
  {
      sexo='g';
  printf("Insira a idade: ");
  scanf("%d",&i);
  if (i==0)
  {
  break;
  }
  printf("Insira o peso: ");
  scanf("%f",&p);
  do
  {
    printf("Insira um sexo valido: ");
    scanf(" %c",&sexo);
  toupper (sexo);
  sexo=toupper(sexo);
  }
  while ((sexo!='M')&&(sexo!='F'));


  if (sexo=='M')
  {
    ch++;
    pesoh+=p;
  }
  if(sexo=='F')
  {
    cm++;
    iddm+=i;
  }
  }
  printf("\n O total de homens foi de: %d",ch);
  printf("\n O total de mulheres foi de: %d",cm);
  printf("\n A media do peso dos homens foi: %.2f",(pesoh/ch));
  printf("\n A media da idade das mulheres foi: %.2f",(iddm/cm));
  return 0;
}
