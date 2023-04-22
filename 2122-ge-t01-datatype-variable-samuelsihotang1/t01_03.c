// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int var1,var2,var3;

  scanf("%d %d %d", &var1, &var2, &var3);
  
  int var4 = var1 >> var2;
  int var5 = var4==var3;
    
  printf("%d\n%d", var4, var5);

  return 0;
}
