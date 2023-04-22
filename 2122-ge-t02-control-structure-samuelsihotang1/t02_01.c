// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>

int main(int _argv, char **_argc)
{
  int jumlah;
  float hargabuku, hargaakhir, diskon, hasil;
  char *dash;
  scanf("%d %f",&jumlah,&hargabuku);
  hargaakhir=jumlah*hargabuku;
  if (hargaakhir>500000)
  {
    diskon=hargaakhir*15/100;
    hasil=hargaakhir-diskon;
    printf("%.2f\n%.2f",diskon,hasil);
  }
  else if (hargaakhir>100000)
  {
    diskon=hargaakhir*10/100;
    hasil=hargaakhir-diskon;
    printf("%.2f\n%.2f",diskon,hasil);
  }
  else if (hargaakhir>50000)
  {
    diskon=hargaakhir*5/100;
    hasil=hargaakhir-diskon;
    printf("%.2f\n%.2f",diskon,hasil);
  }
  else
  {
    dash="---";
    printf("%s\n%.2f",dash,hargaakhir);
  }
  return 0;

}