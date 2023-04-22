// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  float var1,var2,var3,var4;

  scanf("%f %f %f %f",&var1,&var2,&var3,&var4);
  
  float var5=var1+var2+var3+var4;
  float var6=var5/4;

  printf("%.3f\n%.3f",var5,var6);

  return 0;
}
