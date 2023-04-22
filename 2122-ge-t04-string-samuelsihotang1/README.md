# T04 String
Pada sesi ini anda diminta untuk menyelesaikan dua buah persoalan yang akan melatih imajinasi serta kemampuan anda dalam memanipulasi string. Pada dasarnya string adalah a sequence of char-typed values yang diakhiri dengan ```\0```. Karakteristik string memungkinkan array digunakan sebagai media penyimpanan string.

Untuk dapat menyelesaikan kedua persoalan berikut, anda harus memiliki penguasaan yang baik terhadap konsep Memory Allocation, dan Array.

## Tugas 1: Secret Message (t04_01.c, 40 points)
Karena pandemi covid-19 semakin hari semakin mengkhawatirkan, maka Butet dan Ucok memutuskan untuk bekerja dari rumah. Namun Ucok mulai terkendala karena adiknya selalu mengganggunya bekerja dan selalu ikut membaca semua pesan yang masuk. Oleh karena itu Butet mengusulkan bagaiamana bila mereka berkomunikasi dengan istilah Secret Message. Secret Message yang dimaksud Butet yaitu teks yang penulisannya akan dikonversi kedalam nilai ASCII (desimal) dari setiap karakter penyusunnya. Setiap nilai ASCII pada Secret Message ditulis dalam tiga digit. Namun sebelum dikonversi kedalam nilai ASCII, setiap karakter pada text tersebut akan dilakukan pergeseran terlebih dahulu (shifting). Ucok menyetujui ide tersebut dan mereka pun mulai bekerja.

Program akan menerima masukan baris pertama teks  (```str```) dari ```stdin``` dengan panjang minimum 1 karakter dan masukan baris kedua untuk jumlah pergeseran karakter yang akan dilakukan. Untuk setiap karakter teks akan dikonversi menjadi nilai ASCII (desimal) dan akan digeser sesuai dengan input baris kedua untuk selanjutnya ditampilkan dalam satu baris keluaran ke ```stdout```. Nilai ASCII (desimal) ditulis dalam tiga digit. Perhatikan ilustrasi berikut. 

Program akan membaca masukan baris pertama (```str```) dari ```stdin``` dan baris kedua (```int```) dari ```stdin```
```
Sweet
2
```
Program akan mengkonversi setiap karakter menjadi nilai ASCII (desimal) dalam tiga digit.
1. karakter pertama 'S' dikonversi menjadi 083 sesuai dengan nilai ASCIInya yang ditulis dalam tiga digit;
2. karakter pertama 'w' dikonversi menjadi 019 sesuai dengan nilai ASCIInya yang ditulis dalam tiga digit;
3. karakter pertama 'e' dikonversi menjadi 101 sesuai dengan nilai ASCIInya yang ditulis dalam tiga digit;
4. karakter pertama 'e' dikonversi menjadi 101 sesuai dengan nilai ASCIInya yang ditulis dalam tiga digit;
5. karakter pertama 't' dikonversi menjadi 116 sesuai dengan nilai ASCIInya yang ditulis dalam tiga digit;

Selanjutnya program akan menggeser nilai ASCII (desimal) sebanyak +2.
1. Karakter S dengan nilai ASCII 083 digeser +2 menjadi 085;
2. Karakter w dengan nilai ASCII 019 digeser +2 menjadi 121;
3. Karakter e dengan nilai ASCII 101 digeser +2 menjadi 103;
4. Karakter e dengan nilai ASCII 101 digeser +2 menjadi 103;
5. Karakter t dengan nilai ASCII 116 digeser +2 menjadi 118;

Selanjutnya, jika digabungkan maka isi Secret Message-nya adalah ```085121103103118```
![t04-01](https://user-images.githubusercontent.com/38976894/156126270-03bfe949-fe7c-4124-b43e-f14728e9d981.jpeg)


#### Example 1
Input
```
Sweet
2

```
Output
```
085121103103118

```
#### Example 2
Input
```
Sh3 lik3s Cat
258

```
Output
```
086107054035111108110054118035070100119

```


## Tugas 2: Secret Message (t04_02.c, 60 points)
Setelah berhasil menyelesaikan program Secret Message yang luarannya berupa nilai ASCII. Ucok tiba-tiba ingin melakukan inovasi lagi untuk Secret Message mereka. Ia berencana untuk mengembangkan sebuah program lainnya dimana hasil atau output dari Tugas 1 diatas akan konversi lagi kedalam bentuk teks sesuai dengan nilai ASCII seteiap karakternya. Butet pun merasa tertantang untuk mengembangkan program ini. 
Perhatikan ilustrasi berikut.

Program akan membaca masukan baris pertama (```str```) dari ```stdin``` dan baris kedua (```int```) dari ```stdin```
```
Sweet
2
```
hasil dari tugas 1 adalah ```085121103103118```.
Jika di dekomposisi untuk setiap tiga karakter adalah nilai desimal dari karakter ASCII, maka:
1. tiga karakter pertama "085" adalah nilai ASCII dari karakter 'U';
2. tiga karakter berikutnya "121" adalah nilai ASCII dari karakter 'y';
3. tiga karakter berikutnya "103" adalah nilai ASCII dari karakter 'g';
4. tiga karakter berikutnya "103" adalah nilai ASCII dari karakter 'g';
5. tiga karakter berikutnya "118" adalah nilai ASCII dari karakter 'v';

Selanjutnya, jika digabungkan maka isi Secret Message-nya adalah: ```Uyggv ```

![t04-02](https://user-images.githubusercontent.com/38976894/156126747-63faeaa1-6a6e-4a75-a8ec-4ac06c25a6b9.jpeg)


#### Example 1
Input
```
Sweet
2

```
Output
```
085121103103118
Uyggv

```
#### Example 2
Input
```
just4codes
260
```
Output
```
111122120121057104116105106120
ozxy9htijx

```

## Reference
ASCII Table https://www.asciitable.com/

## Reporting

Presentasikan pekerjaan anda dalam sebuah video. Pada presentasi:
1. Definisikan tipe data yang cocok dan representatif untuk setiap properti.
2. Berikan dasar pemikiran anda mengenai usulan tipe data tersebut.
3. Jabarkan solusi anda.

**Note**: Semakin tajam argumen dan penjabaran anda semakin mudah penilaian dilakukan.

**Kriteria Video Presentasi**:
+ 1080p/30fps, min. 10 menit.
+ Suara jernih dan dapat dengan jelas terdengar.
+ Posting video anda di YouTube, di-set "Not For Kids" dengan visibility Unlisted.

## Submissions:

1. t04_01.c
2. t04_02.c
3. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
