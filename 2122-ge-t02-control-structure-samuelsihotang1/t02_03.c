// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  char operator;
  int starter, hasil, ingput;
  scanf("%c",&operator);
  if (operator=='*')
  {
    starter=1;
  }
  else if (operator=='+')
  {
    starter=0;
  }
  else if (operator=='-')
  {
    starter=0;
  }

  for (int i = 1; i < 5; ++i) {
  scanf("%i",&ingput);
  
  if (ingput == -1) {
    printf("0");
  break;
  }

  if (operator=='*')
  {
    hasil=starter*ingput;
    starter=hasil;
  }
  else if (operator=='+')
  {
    hasil=starter+ingput;
    starter=hasil;
  }
  else if (operator=='-')
  {
    hasil=starter-ingput;
    hasil=-hasil;
    starter=hasil;
  }

  printf("%i\n",hasil);
  }
  return 0;
}