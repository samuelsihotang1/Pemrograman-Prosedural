# M01 Good Students

Pada sesi ini anda diminta untuk menyelesaikan sebuah persoalan yang akan menguji keterampilan anda dalam memrogram dengan pendekatan prosedural. Anda dapat menggunakan codebase yang dihasilkan pada T05 karena strukturnya mirip.

## Tugas 1 Add-Display (m01_01.c, 60 points)

Prodi Sistem Informasi senantiasa berupaya untuk memotivasi dan menghargai kinerja akademik mahasiswa. Kinerja akademik dilihat dari prestasi akademik yang terefleksi melalui capaian IPK (Indeks Prestasi Kumulatif).

Untuk keperluan ini, anda diminta untuk mengembangkan sebuah program sederhana yang mampu menyimpan sekumpulan data mahasiswa. Seorang mahasiswa dapat dikarakterisasi melalui NIM (Nomor Induk Mahasiswa -- ```id```), nama lengkap (```name```), dan IPK (```gpa```). Pada solusi anda, enkapsulasi data mahasiswa dalam bentuk sebuah **structure**.

Dalam melakukan tugasnya, solusi akan terus menerus berinteraksi dengan penggunanya hingga diperintahkan untuk berhenti. Dalam berinteraksi, solusi akan membaca baris-baris masukan yang diberikan dan berhenti ketika diberi baris masukan berupa ```---```.

Untuk memasukkan data mahasiswa, solusi akan membaca sebaris masukan yang panjangnya tidak lebih dari 100 karakter dengan format sebagai berikut.

```bash
student-add#<id>#<name>#<gpa>
```

Baris masukkan terdiri atas 3 segmen yang diseparasi dengan hash sign (```#```). Segmen pertama berisi perintah yang harus dilakukan. Untuk menambah data mahasiswa, perintah yang digunakan adalah ```student-add``` diikuti dengan detil data mahasiswa. Berikut adalah contoh sebaris perintah untuk menambah satu buah data mahasiswa.

```bash
student-add#12S21001#Dhino Turnip#3.00
```

**Batasan**:

Jumlah data mahasiswa yang dimasukkan tidak lebih dari 100 buah.

Berikutnya, solusi juga harus dapat menampilkan seluruh data mahasiswa yang tersimpan. Berikut adalah format perintah yang digunakan.

```bash
student-show-all
```

Solusi akan menampilkan data mahasiswa satu-per-satu, dengan format sebagai berikut.

```bash
<id>|<name>|<gpa>
```

**Input**

```bash
student-add#12S21001#Dhino Turnip#3.00
student-add#12S21002#Marudut Tampubolon#1.63
student-add#12S21003#Jusas Tampubolon#3.45
student-show-all
student-add#12S21004#Estomihi Pangaribuan#3.42
student-show-all
---

```

**Output**

```bash
12S21001|Dhino Turnip|3.00
12S21002|Marudut Tampubolon|1.63
12S21003|Jusas Tampubolon|3.45
12S21001|Dhino Turnip|3.00
12S21002|Marudut Tampubolon|1.63
12S21003|Jusas Tampubolon|3.45
12S21004|Estomihi Pangaribuan|3.42

```

## Tugas 2 The Best Only (m01_02.c, 40 points)

Tugas berikutnya, anda diminta untuk mengembangkan sebuah fitur untuk menampilkan satu mahasiswa terbaik dengan performa akademik tertinggi (IPK). Format perintah yang digunakan adalah sebagai berikut.

```bash
student-show-best
```

Baris masukkan terdiri atas satu segmen saja yang berisi perintah.

**Input**

```bash
student-add#12S21001#Dhino Turnip#3.00
student-add#12S21002#Marudut Tampubolon#1.63
student-show-best
student-add#12S21003#Jusas Tampubolon#3.45
student-show-best
student-show-all
student-add#12S21004#Estomihi Pangaribuan#3.42
student-show-best
---

```

**Output**

```bash
12S21001|Dhino Turnip|3.00
12S21003|Jusas Tampubolon|3.45
12S21001|Dhino Turnip|3.00
12S21002|Marudut Tampubolon|1.63
12S21003|Jusas Tampubolon|3.45
12S21003|Jusas Tampubolon|3.45

```


## Reporting
Lakukan pertemuan dengan pair anda untuk mendiskusikan persoalan dan pengembangan solusi. Rekaman dari pertemuan tersebut menjadi bagian dari artefak tugas yang harus dikumpulkan. Durasi rekaman minimal **30 menit**.

Presentasikan pekerjaan anda dalam sebuah video. Pada presentasi:
1. Jabarkan solusi anda dengan rinci.
2. Berikan rationale dari setiap implementasi yang anda hasilkan.
3. Jabarkan alir eksekusi dari solusi anda.
4. Demonstrasikan pekerjaan anda.
5. Tunjukkan hasil yang anda peroleh dari GitHub Classroom.
6. Sebutkan kendala yang dihadapi dalam pengerjaan tugas kali ini.

Note: Semakin tajam argumen dan penjabaran anda semakin mudah penilaian dilakukan.

Kriteria Video Presentasi:
+ 1080p/30fps, min. 10 menit.
+ Fullscreen (taskbar terlihat).
+ Suara jernih dan dapat dengan jelas terdengar.
+ Posting kedua video anda di YouTube, di-set "Not For Kids" dengan visibility Unlisted.

## Submissions:

1. m01_01.c
2. m01_02.c
3. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
