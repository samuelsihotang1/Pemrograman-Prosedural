// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int jumlahbaris, n, terbesar, terkecil;
  scanf("%i",&jumlahbaris);
  int arey[jumlahbaris];

  for (n = 0; n < jumlahbaris; n++) {
    scanf("%i",&arey[n]);
  }

  if (arey[0]>arey[1])
  {
    terbesar=arey[0];
    terkecil=arey[1];
  }
  else
  {
    terbesar=arey[1];
    terkecil=arey[0];
  }

  for (n = 2; n < jumlahbaris; n++) {
    if (arey[n]>terbesar)
    {
      terbesar=arey[n];
    }
    else if (arey[n]<terkecil)
    {
      terkecil=arey[n];
    }
  }

  printf("%i\n%i", terkecil, terbesar);


  return 0;
}
