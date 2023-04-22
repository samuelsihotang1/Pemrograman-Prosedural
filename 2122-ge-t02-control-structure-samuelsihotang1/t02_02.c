// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int ingput;
  scanf("%d", &ingput);
  switch (ingput) {
  case 5:
  printf("milk\n");
  case 4:
  printf("fruits\n");
  case 3:
  printf("vegetables\n");
  case 2:
  printf("side dishes\n");
  case 1:
  printf("staple food\n");
  }
  if (ingput==1)
  {
    printf("you need side dishes");
  }
  else if (ingput==2)
  {
    printf("you need vegetables");
  }
  else if (ingput==3)
  {
    printf("good");
  }else if (ingput==4)
  {
    printf("very good");
  }else if (ingput==5)
  {
    printf("perfect");
  }
  
  return 0;
 
}