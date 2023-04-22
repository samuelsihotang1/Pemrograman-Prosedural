// 12S21040 - Christina Putri Hutahaean
// 12S21041 - Samuel Christy Angie Sihotang

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// kita panggil library yang akan dipakai

struct mahasiswa_t // ini akan kita gunakan untuk membuat string menjadi memilikli array
// karena pada dasarnya string itu char yang memiliki array, sehingga char-array tidak bisa memiliki array lagi
// karena alasan itulah kita membutuhkan structure dan juga pastinya agar bisa memiliki variabel di dalam variabel
{
  char nim[777];
  char nama[777];
  char ipk[777];
};

int main(int _argc, char **_argv)
{

  struct mahasiswa_t mhs[777]; // kita panggil structure dan kita buat identifier nya "mhs"
  char input[777];             // kita declare char array , karena sepemahaman saya itu agar charnya tersusun rapi sesuai urutan array
  char *sementara;             // kita declare char dengan pointer agar dapat menerima string
  float sebentar;
  float best = 0.00;
  int n = 0;
  int m;
  int p;

  while (1 == 1) // ini 1==1 agar looping whilenya selalu true
  {
    fgets(input, sizeof input, stdin); // meminta input string
    //(nama variabel yang dipanggil, size variabel tersebut, dan stdin)
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
    sementara = strtok(input, "#"); // strtok itu untuk mengambil char dari 0 hingga sebelum "#"
    //(nama variabel, char pembatas)
    // hasilnya dimasukkan ke variabel sementara
    if (input[0] == '-' && input[1] == '-' && input[2] == '-')
    // ini jika inputnya tripple dash, karena char array dari 0,1,2 itu - - -
    {
      return 0; // untuk menghentikan program
    }
    else if (strcmp(sementara, "student-add") == 0) // strcmp itu untuk membandingkan "sementara" dengan "student-add"
    //(variabel, teks yang mau dibandingkan)
    {
      sementara = strtok(NULL, "#");
      // sama seperti strtok yang tadi, hanya saja dimulai dari NULL
      // artinya dari yang strtok terakhir
      strcpy(mhs[n].nim, sementara); // strcpy itu untuk mengcopy dari "sementara" ke "mhs[n].nim"

      sementara = strtok(NULL, "#");
      // sama seperti tadi
      strcpy(mhs[n].nama, sementara);

      sementara = strtok(NULL, "#");
      strcpy(mhs[n].ipk, sementara);

      sebentar = atof(mhs[n].ipk); // atof itu untuk mengubah string ke float

      n++; // n nya ditambah 1

      if (sebentar > best) // ini jika sebentar lebih dari best
      {
        best = sebentar;
      }
    }
    else if (input[13] == 'a' && input[14] == 'l' && input[15] == 'l') // ini untuk membandingkan
    // logikanya sama seperti perbandingan - - -
    {
      for (m = 0; m < n; m++)
      {
        printf("%s|%s|%s\n", mhs[m].nim, mhs[m].nama, mhs[m].ipk);
      }
    }
    else if (input[13] == 'b' && input[14] == 'e' && input[15] == 's' && input[16] == 't') // ini untuk membandingkan
    // logikanya sama seperti perbandingan - - -
    {
      gcvt(best, 3, sementara); // gcvt itu untuk mengubah float ke char
      for (m = 0; m < n; m++)
      {
        if (strcmp(mhs[m].ipk, sementara) >= 0)
        {
          p = m;
        }
      }
      printf("%s|%s|%s\n", mhs[p].nim, mhs[p].nama, mhs[p].ipk);
    }
  }
}