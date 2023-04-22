// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int jumlahbaris, n, terbesar, terkecil, jarakfinal;
  float ratarata = 0;
  scanf("%i",&jumlahbaris);
  int jaraknilai[jumlahbaris], arey[jumlahbaris];

  for (n = 0; n < jumlahbaris; n++) {
    scanf("%i",&arey[n]);
    ratarata=ratarata+arey[n];
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

  for (n = 0; n < jumlahbaris-1; n++) {

    jaraknilai[n]=arey[n+1]-arey[n];
    if (jaraknilai[n]<0)
    {
      jaraknilai[n]=-jaraknilai[n];
    }
    
  }

  if (jaraknilai[0]>jaraknilai[1])
  {
    jarakfinal=jaraknilai[0];
  }
  else
  {
    jarakfinal=jaraknilai[1];
  }

  for (n = 2; n < jumlahbaris-1; n++) {
    if (jaraknilai[n]>jarakfinal)
    {
      jarakfinal=jaraknilai[n];
    }
  }

  ratarata=ratarata/jumlahbaris;

  printf("%i\n%i\n%.2f\n%i", terkecil, terbesar, ratarata, jarakfinal);


  return 0;
}
