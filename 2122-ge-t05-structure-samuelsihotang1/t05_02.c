// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>
#include <string.h>

enum jeniskelamin_t
{
  lp = 0,
  pr = 0
};

struct anggota_t
{
  char cowo[100];
  char cewe[100];
  enum jeniskelamin_t jeniskelamin;
};

int main(int _argv, char **_argc)
{
  struct anggota_t agt[1000];
  char masuk[1000];
  char *sementara;
  int panjang, belakang, batascowo, batascewe;
  int ncowo=0;
  int ncewe=0;
  int pria=0;
  int wanita=0;

  while (1)
  {
    fgets(masuk, sizeof masuk, stdin);
    while (1)
    {
      if (masuk[strlen(masuk) - 1] == '\n' || masuk[strlen(masuk) - 1] == '\r')
      {
        masuk[strlen(masuk) - 1] = '\0';
      }
      else
      {
        break;
      }
    }
    if (masuk[0]=='-' && masuk[1]=='-' && masuk[2]=='-')
    {
      break;
    }
    else if (masuk[0]=='r' && masuk[1]=='e' && masuk[2]=='g')
    {}
    else
    {
      panjang=strlen(masuk)-1;
      belakang = (int)(strrchr(masuk, '|') - masuk);
      if (panjang-belakang==4)
      {
        pria++;
        sementara = strtok(masuk, "|");
        strcpy(agt[ncowo].cowo, sementara);
        ncowo++;
      }
      else if(panjang-belakang==6)
      {
        wanita++;
        sementara = strtok(masuk, "|");
        strcpy(agt[ncewe].cewe, sementara);
        ncewe++;
      }
      batascowo=ncowo;
      batascewe=ncewe;
    }
  }

  printf("%i|%i\n",pria,wanita);

  if (pria!=0)
  {
    for (ncowo = 0; ncowo < batascowo; ncowo++)
  {
    printf("%s|",agt[ncowo].cowo);
  }
  printf("\n");
  }
  
  if (wanita!=0)
  {
    for (ncewe = 0; ncewe < batascewe; ncewe++)
  {
    printf("%s|",agt[ncewe].cewe);
  }
  }
  
  return 0;
  
}