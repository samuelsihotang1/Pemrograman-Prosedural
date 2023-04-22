# T05 Structure-enumeration
Pada sesi ini anda diminta untuk menyelesaikan sebuah persoalan yang akan melatih imajinasi serta kemampuan anda dalam mendefinisikan, menggunakan, dan memanipulasi structure. Lebih lanjut, anda juga akan memanfaatkan structure dalam pola array.

## Tugas 0 (t05_00.c, 0 points)
Identifikasi dan definisikan (deklarasikan dalam kode program) contoh yang ada disekeliling Anda:
1. enumerasi
2. structure
Laporkan *hasilnya dalam video presentasi* pada Tugas 05.

## Tugas 1 (t05_01.c, 40 points)
Saat ini butet terpilih sebagai sekretaris BEM. Satu hari setelah iya terpilih menjadi sekretaris, ia sudah dihujani banyak tugas. Mulai dari mengurus surat menyurat, proposal, LPJ hingga mendata mahasiswa di kampusnya.
Sebagai sahabat yang baik, Ucok hadir dengan solusi-solusi terbaiknya untuk membantu meringankan beban Butet. Ucok menyarankan agar mereka mengembangkan sebuah program untuk mendata jumlah mahasiswa dan mahasiswi saat identitas mereka di daftarkan pada programnya.
Sebagai awal mula pengembangan, nantinya program akan menyimpan identitas mahasiswa, mulai dari nama, nim, tahun masuk dan jenis kelaminnya. Kemudian program akan mengembalikan jumlah mahasiswa dan mahasiswi.

Untuk mencapai ide tersebut, Ucok selanjutnya merancang serangkaian perintah untuk mencapai fungsi program yang Ia maksud. Perintah akan dimasukkan dalam sebaris inpuan dan diikuti dengan satu atau lebih inputan lainnya hingga pengguna memerintahkan untuk berhenti. Berikut adalah dafyar perintah yang akan diproses:
- Baris perintah ```register``` digunakan  menambahkan informasi atau identitas mahasiswa. Baris perintah ini akan diikuti oleh masukan lainnya yang merepresentasikan identitas mahasiswa, diawali dari ```nama, nim, tahun masuk, dan jenis kelamin```.
- Baris perintah ```---``` digunakan untuk mengakhiri inputan.

Dalam upayanya mengembangkan solusi yang efektif dan elegan, Ucok akan menggunakan structure dan enumeration.
Setelah mendengar penjelasan dari Ucok, Butet pun langsung setuju dan ingin sekali membantu Ucok, namun Ia masih sangat sibuk dengan pekerjaan lainnya. Oleh karena itu, Sebagai seorang mahasiswa yang sudah belajar tentang structure dan enumeration Butet meminta Anda untuk bantu Ucok sang sahabat untuk menyelesaikan program ini. 

### Solution Design

### Input

Program akan secara terus-menerus membaca satu baris perintah yang dimasukan oleh pengguna. Program kemudian bereaksi sesuai dengan perintah yang dimasukan. Program hanya akan berhenti jika diperintahkan. Terdapat dua buah perintah, yaitu:
- Baris perintah ```register``` digunakan  menambahkan informasi atau identitas mahasiswa. Baris perintah ini akan diikuti oleh masukan lainnya yang merepresentasikan identitas mahasiswa, diawali dari ```nama, nim, tahun masuk, dan jenis kelamin```.
- Baris perintah ```---``` digunakan untuk mengakhiri inputan.

```
<register>
<name1>|<nim1>|<year1>|<gender1>
<name2>|<nim2>|<year2>|<gender2>
<name3>|<nim3>|<year3>|<gender3>
---

```
### Output
Program hanya akan memberikan satu baris keluaran, yaitu pada saat program diberhentikan maka akan ditampilkan jumlah mahasiswa dan mahasiswa yang di input. Satu baris keluaran terdiri atas tiga segmen, yaitu ```jumlah mahasiswa``` dan ```jumlah mahasiswi``` yang diseparasi dengan simbol ```|```.

```
<Sum of MALE>|<Sum of FEMALE>

```

Untuk membantu Anda memahami penjelasan Ucok, perhatikan contoh dibawah ini:
### Example 1:
Input:

```bash
register
Ishak|11S17055|2017|MALE
Anna|11418020|2018|FEMALE
Risa|11418044|2018|FEMALE
Fitri|11S19020|2019|FEMALE
---

```

Output:
```bash
1|3

```

### Example 2
Input:

```bash
register
Ishak|11S17055|2017|MALE
Jhon|11420020|2020|MALE
Leonardo|12S12144|2021|MALE
---

```

Output:
```bash
3|0

```

### Example 3
Input:

```bash
---

```

Output:
```bash
0|0

```

## Tugas 2 (t05_02.c, 60 points)

Setelah Ucok berhasil menyelesaikan program pertama, Butet cukup senang dengan hasilnya. Namun Butet curhat kepada Ucok, bahwa selain jumlah mahasiswa Ia juga memerlukan nama mahasiswa dan mahasiswi tersebut.
Ucok menerima tantangan dari Butet. Butet pun bersemangat untuk membuat desain solusi yang Ia maksud.

### Solution Design

### Input
Pada dasarnya untuk program input masih sama dengan program yang pertama.

### Output
Program hanya akan memberikan tiga baris keluaran, yaitu pada saat program diberhentikan maka akan ditampilkan 
- baris pertama merupakan jumlah mahasiswa dan mahasiswa yang di input. Satu baris keluaran ini terdiri atas tiga segmen, yaitu ```jumlah mahasiswa``` dan ```jumlah mahasiswi``` yang diseparasi dengan simbol ```|```.
- baris kedua merupakan ```nama-nama mahasiswa```. Satu baris keluaran ini terdiri dari ```0``` sampai banyak segmen, tergantung banyaknya inputan identitas ```mahasiswa``` yang diseparasi dengan simbol ```|```.
- baris kedua merupakan ```nama-nama mahasiswi```. Satu baris keluaran ini terdiri dari ```0``` sampai banyak segmen, tergantung banyaknya inputan identitas ```mahasiswi``` yang diseparasi dengan simbol ```|```.

```bash
<Sum of MALE>|<Sum of FEMALE>
<M_name1>|<M_name2>|<M_name3>...|
<F_name1>|<F_name2>|<F_name3>...|

```

Untuk menyelesaikan program ini, Butet masih meminta Anda untuk membantu Ucok. Oleh karena itu, perhatikan contoh dibawah ini membantu Anda memahami penjelasan Butet: 
### Example 1
Input:

```bash
register
Ishak|11S17055|2017|MALE
Anna|11418020|2018|FEMALE
Risa|11418044|2018|FEMALE
Fitri|11S19020|2019|FEMALE
---

```

Output:

```bash
1|3
Ishak|
Anna|Risa|Fitri|

```
### Example 2

Input:

```bash
register
Ishak|11S17055|2017|MALE
Jhon|11420020|2020|MALE
Leonardo|12S12144|2021|MALE
---

```

Output:

```bash
3|0
Ishak|Jhon|Leonardo|

```

### Example 3
Input:

```bash
---

```

Output:
```bash
0|0

```

## Reporting

Presentasikan pekerjaan anda dalam sebuah video. Pada presentasi:
1. Jawaban tugas 0 di presentasikan pada awal video.
2. Kemudian Definisikan structure dan enumerasi yang Anda gunakan untuk menyelesaikan persoalan ini.
3. Berikan dasar pemikiran anda mengenai usulan solusi tersebut.
4. Jabarkan solusi anda.

**Note**: Semakin tajam argumen dan penjabaran anda semakin mudah penilaian dilakukan.

**Kriteria Video Presentasi**:
+ 1080p/30fps, min. 10 menit.
+ Suara jernih dan dapat dengan jelas terdengar.
+ Posting video anda di YouTube, di-set "Not For Kids" dengan visibility Unlisted.

## Submissions:

1. t05_01.c
2. t05_02.c
3. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
