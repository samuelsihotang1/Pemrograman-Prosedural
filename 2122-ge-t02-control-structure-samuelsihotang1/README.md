# T02 Control Structe

## Tugas 1 (t02_01.c, 40 points)
Toko yang di rintis Ucok dan Butet sejak dulu sudah semakin berkembang. Menjadi enterpreneur yang di cita-citakan sejak dulu sudah terwujud. Namun tidak cukup sampai disana, akhir-akhir ini Ucok sedang memikirkan sesuatu, suatu ide besar untuk menarik minat pelanggan. Kemudian Butet hadir dengan hasil riset yang dilakukannya beberapa minggu terakhir. Butet terinspirasi dari beberapa toko online yang penjualannya bisa mencapai ratusan buku per bulannya. Kemudian Butet memberitahu Ucok bahwa toko yang mereka rintis harus memberikan layanan dan penawaran terbaik bagi pelanggannya. Dari riset yang dilakukan Butet, penawaran terbaik dapat diwujudkan melalui pemberian diskon. 
Setelah dipikir-pikir, pemberian diskon merupakan ide yang luar biasa, Ucok pun setuju. Dari hasil diskusi yang mereka lakukan, maka didapatkan kesimpulan:
1. Setiap pembelian buku diatas ```50,000``` akan diberi potongan harga sebanyak ```5%```
2. Setiap pembelian diatas atau sama dengan ```100,000``` maka akan diberi potongan harga ```10%``` 
3. Setiap pembelian diatas ```500,000``` akan diberi potongan ```15%```.

Untuk mewujudkan ide cemerlang ini, Ucok dan Butet memerlukan bantuan Anda untuk membangun sebuah program yang membaca jumlah buku yang dibeli dan harganya. Berdasarkan masukan tersebut maka akan dihasilkan dua baris keluaran berupa total potongan yang didapatkan dan total yang akan dibayar setelah mendapatkan potongan. Perhatikan Example 1 dan Example 2.

### Example 1
Bontor sebagai pelanggan pertama toko mereka hari ini ingin membeli Buku Erlangga Terampil Berhitung Matematika Kelas 6 SD sebanyak ```5``` buku dengan harga per bukunya adalah ```50,000 ```. Maka Ucok akan input pada program, untuk baris pertama adalah jumlah buku dan baris kedua adalah harga buku:

```bash
5
50000
```
Kemudian pada program akan ditampilkan 2 baris output, baris pertama berupa potongan harga yang diperoleh Bontor dan baris kedua total yang akan dibayar Bontor setelah mendapatkan potongan:

```bash
25000.00
225000.00


```

### Example 2
Karena penawaran yang sangat menarik, keesokan harinya Bontor kembali ke toko untuk membeli Buku Cerita Rakyat Nusantara sebanyak ```3``` dengan harga per bukunya adalah ```50,000```. Maka Ucok akan input pada program, baris pertama jumlah buku yaitu sebanyak `3` dan harga buku yaitu `5,000`:

```bash
3
5000
```

Kemudian pada program akan menampilkan output berupa potongan harga yang diperoleh Bontor dan total yang akan dibayar setelah mendapatkan potongan, namun kali ini Bontor tidak memperoleh potongan karena total belanjanya kurang dari ```50.000```, maka untuk baris pertama total potongan akan digantikan dengan ```---``` (trippled dashes) dan baris kedua adalah total yang akan dibayar Bontor:

Output:
```bash
---      
15000.00


```

## Tugas 2 (t02_02.c, 20 points)

Pada hari senin kemarin, saat perjalanan ke rumah sakit untuk menjenguk temannya, Ucok bertemu seorang ahli gizi. Di dalam perjalanan, Ucok berbincang bersama sang Ahli gizi tersebut. Ucok ingin tahu lebih banyak mengenai makanan 4 sehat 5 sempurna yang sudah menjadi kampanye kesehatan sejak dahulu. 
Dari perbincangan bersama sang ahli gizi, Ucok mengetahui banyak hal baru, yaitu: 
1. Makanan pokok (staple food) biasanya memiliki kandungan karbohidrat yang bermanfaat sebagai sumber energi bagi tubuh. Kentang, Sagu, Gandum, Ubi, Singkong, atau Jagung merupakan jenis makanan pokok.
2. Lauk pauk (side dishes) merupakan bahan makanan yang mengandung kadar protein tinggi. Protein dapat diperoleh dari dua jenis makanan, yakni nabati dan hewani. 
3. Sayuran (vegetables) memiliki kandungan serat yang cukup tinggi sehingga baik untuk menjaga kesehatan saluran pencernaan. Selain itu sayuran juga mengandung berbagai vitamin dan mineral yang diperlukan oleh tubuh untuk bekerja dengan baik.
4. Ketika kita mengonsumsi buah (fruits), suplai energi dapat bertambah dengan cepat. Tambahan tenaga ini sangat penting untuk menghadapi jadwal yang padat.
5. Susu (milk) menjadi pelengkap dalam makanan 4 sehat 5 sempurna yang merupakan tambahan nutrisi. Kandungan susu yaitu kalsium yang bermanfaat untuk menjaga kesehatan tulang.

Selain itu, sang ahli gizi juga menyimpulkan menu makanan 4 sehat 5 sempurna tersebut:
1. Apabila kamu hanya makan makanan pokok, maka "you need side dishes".
2. Apabila kamu hanya makan makanan pokok dan lauk pauk, maka "you need vegetables".
3. Apabila kamu memakan sayur, "good".
4. Apabila kamu memakan buah, "very good".
5. Apabila kamu menambah susu, "perfect".

Setelah mendengar penjelasan sang ahli gizi, Ucok jadi ingin mengembangkan sebuah program yang menampilkan kategori menu makanan 4 sehat 5 sempurna tersebut.
Tugas Anda adalah membantu Ucok untuk mewujudkan keinginannya. Perhatikan Example 1 dan Example 2.


### Example 1
Jika Ucok memilih menu level 1, maka Ia akan input ```1``` pada program.

```bash
1
```

kemudian program akan menampilkan 2 baris keluaran, baris pertama merupakan menu level 1 yaitu staple food dan kesimpulannya "you need side dishes", contoh output:

```bash
staple food
you need side dishes


```

### Example 2
Untuk contoh kedua, jika Ucok memilih menu level 3, maka Ia akan input ```3``` pada program.

```bash
3
```
kemudian program akan menampilkan menu level 3 dan 1 baris untuk kesimpulannya, contoh output:

```bash
vegetables
side dishes
staple food
good


```


## Tugas 3 (t02_02.c, 40 points)

Menjadi seorang enterpreneur adalah suatu kebanggaan bagi Ucok. Kegiatan ucok setiap harinya Ucok mengenali produk baru, menentukan cara produksi baru, menyusun manajemen operasi untuk pengadaan produk baru, memasarkan, serta mengatur permodalan operasi. Dari pagi hingga sore hari Ucok sibuk mengelola toko yang dibuka olehnya dan Butet. Pada malam harinya Ucok lebih suka menemani Poltak sang adik untuk bermain sambil belajar. Hari ini Ucok dan Poltak belajar mengenai Operasi perhitungan, yaitu penjumlahan, pengurangan dan perkalian. Pertama, mereka harus menginisialisasi atau set nilai bilangan pertama untuk setiap operasi. Untuk penjumlahan adalah `0`, untuk pengurangan adalah `0` dan untuk perkalian di set `1` supaya hasil perkalian berikutnya tidak `0`. Kedua, mereka  memilih operan apa yang akan digunakan. Ketiga, mereka akan memasukkan bilangan kedua yang akan dioperasikan. Setelah itu maka akan ditampilkan keluaran berupa total bilangan yang dihasilkan sesuai dengan operan yang dipilih.
Ucok dan Poltak berencana operasi perhitungan ini akan dibuat dalam sebuah program C, oleh karena itu mereka membutuhkan Anda untuk membangun programnya.
Namun sebelumnya, Poltak ingin menambahkan satu aturan dalam operasi perhitungan ini. Operasi perhitungan akan berakhir bila melakukan input kurang dari lima ``5`` kali atau memasukkan input ``-1``.   
Perhatikan Example berikut untuk menambah pemahaman Anda.

### Example 1:
Setelah Anda set nilai bilangan untuk setiap operasi, diawal program akan menerima 1 jenis operator yang akan digunakan (`+`, `-`, `*` ), pada baris kedua program akan menerima masukan satu bilangan yang akan di operasikan. Misalnya disini akan dipilih jenis opertor penjumlahan `+` dan bilangan yang akan dioperasikan adalah `1`.
Input:
```bash
+
1
```
Selanjutnya program akan menampilkan, 1 baris untuk operan yang kita input, 1 baris untuk bilangan yang dioperasikan dan 1 baris untuk hasil operasi ``(0+1=1)``
```bash
+
1
1
```
kemudian masukan bilangan yang akan dioperasikan berikutnya:
```bash
2
```
maka program akan menampilkan 1 baris untuk operan yang kita input, 1 baris untuk bilangan pertama yang akan dioperasikan, 1 baris untuk hasil operasi penjumlahannya ``(0+1=1)``, 1 baris untuk bilangan kedua yang akan dioperasikan, dan 1 baris untuk hasil operasinya ``(1+2=3)`` 
```bash
+
1
1
2
3
```
kemudian bila bilangan yang akan dioperasikan berikutnya adalah `-1`:
```bash
-1
```
maka program akan menampilkan 1 baris untuk operan yang kita input, 1 baris untuk bilangan pertama yang akan dioperasikan, 1 baris untuk hasil operasi penjumlahannya ``(0+1=1)``, 1 baris untuk bilangan kedua yang akan dioperasikan, dan 1 baris untuk hasil operasinya ``(1+2=3)``, 1 baris inputan ``-1``, 1 baris untuk 0 dan program akan keluar.
```bash
+
1
1
2
3
-1
0


```

### Example 2:
Pada contoh kedua ini, operai yang dipilih adalah operasi perkalian maka masukan baris pertama adalah `*`. Kemudian masukan baris kedua adalah bilangan pertama yang akan dioperasikan dengan bilangan yang telah di inisialisai sebelumnya.
Input:
```bash
*
2
```
selanjutnya program akan menampilkan 1 baris untuk operasi yang dipilih, 1 baris untuk bilangan yang dikalikan dan 1 baris untuk hasik perkalian `(1*2=2)`:
```bash
*
2
2
```
kemudian masukan bilangan yang akan dioperasikan berikutnya, misalnya:
```bash
3
```
maka program akan menampilkan 1 baris untuk operasi yang dipilih, 1 baris untuk bilangan pertama yang dikalikan, 1 baris untuk hasik perkalian pertama `(1*2=2)`, 1 baris bilangan yang akan dikalikan berikutnya `3`, dan 1 baris untuk hasil perkaliannya `(2*3=6)`: 
```bash
*
2
2
3
6
```
kemudian masukan bilangan yang ketiga:
```bash
5
```
maka keluarannya:
```bash
*
2
2
3
6
5
30

```
kemudian masukan yang ke empat:
```bash
1
```
maka keluarannya seperti berikut ini, dan program akan keluar:
```bash
*
2
2
3
6
5
30
1
30


```

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

1. t02_01.c
2. t02_02.c
3. t02_03.c
4. changelog.txt
