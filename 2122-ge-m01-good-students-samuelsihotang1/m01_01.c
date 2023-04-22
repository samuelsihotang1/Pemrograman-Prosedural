// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mahasiswa_t
{
  char ipk[777];
  char nim[777];
  char nama[777];
};

int main(int _argc, char **_argv)
{
  char input[777];
  int n = 0;
  struct mahasiswa_t mhs[777];
  char *sementara;

  while (7 == 7)
  {
    fgets(input, sizeof input, stdin);
    while (1)
    {
      if (input[strlen(input) - 1] == '\n' || input[strlen(input) - 1] == '\r')
      {
        input[strlen(input) - 1] = '\0';
      }
      else
      {
        break;
      }
    }
    sementara = strtok(input, "#");
    if (input[0] == '-' && input[1] == '-' && input[2] == '-')
    {
      break;
    }
    else if (strcmp(sementara, "student-add") == 0)
    {
      sementara = strtok(NULL, "#");
      strcpy(mhs[n].nim, sementara);

      sementara = strtok(NULL, "#");
      strcpy(mhs[n].nama, sementara);

      sementara = strtok(NULL, "#");
      strcpy(mhs[n].ipk, sementara);

      n++;
    }
    else if (strcmp(sementara, "student-show-all") >= 0)
    {
      for (int m = 0; m < n; m++)
      {
        printf("%s|%s|%s\n", mhs[m].nim, mhs[m].nama, mhs[m].ipk);
      }
    }
  }
  return 0;
}