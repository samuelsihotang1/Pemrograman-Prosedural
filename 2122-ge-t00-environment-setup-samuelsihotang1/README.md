## Environment Setup

Sesi ini ditujukan untuk memeriksa kesiapan perangkat pendukung yang diperlukan dalam pembelajaran.

### Requirements
Pastikan anda telah memiliki [GCC MinGW](https://nuwen.net/) ter-install dengan benar.

## Task 01
Pada berkas ```t00_01.c``` tuliskan NIM dan nama anda. Ini harus selalu menjadi hal pertama yang anda lakukan setiap kali memodifikasi berkas. Selanjutnya tuliskan kode berikut.
```
#include <stdio.h>

int main(int _argv, char **_argc)
{
    printf("Hello, world!");

    return 0;
}
```

Untuk memvalidasi, melalui terminal, jalankan perintah berikut untuk meng-compile source code ```t00_01.c```.
```
gcc t00_01.c
```
Pada local storage anda kemudian akan di-generate ```a.exe```. Silakan mengeksekusi executable tersebut dan periksa keluarannya. Jika keluaran sudah tepat, silakan commit dan push pekerjaan anda.

Sebelum men-submit, tuliskan sebaris simpulan dari apa yang telah anda kerjakan pada berkas ```changelog.txt```.

Jika menyelesaikan bagian ini dengan benar, maka anda seharusnya telah mendapat nilai 50/100.

## Task 02
Modifikasi berkas ```t00_02.c``` sedemikian rupa sehingga menampilkan output ```Aloha!``` ke layar.

Sebelum men-submit, tuliskan sebaris simpulan dari apa yang telah anda kerjakan pada berkas ```changelog.txt```.

Jika menyelesaikan bagian ini dengan benar, maka anda seharusnya telah mendapat nilai 100/100.


## Submission:

1. t00_01.c
2. t00_02.c
3. changelog.txt