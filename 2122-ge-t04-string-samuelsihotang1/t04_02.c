// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int _argv, char **_argc)
{
  char texx[255];
  int shifting, n, totalloop;
  fgets(texx, sizeof texx, stdin);
  scanf("%i",&shifting);
  totalloop = strlen(texx)-1;

  if (shifting>254)
  {
  shifting=shifting%255;
  }
  else if (shifting<-254)
  {
  shifting=shifting%-255;
  }

  for (n= 0; n<=totalloop-1; n++)
  {
  texx[n]=texx[n]+shifting;
  printf("%03i",texx[n]);
  }

  printf("\n");

  for (n= 0; n<=totalloop-1; n++)
  {
  printf("%c",texx[n]);
  }

  return 0;

}