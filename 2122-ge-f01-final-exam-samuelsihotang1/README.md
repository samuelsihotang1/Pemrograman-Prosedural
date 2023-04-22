# F01 Graduated

Pada tugas-tugas terstruktur anda telah mengembangkan sebuah simulator yang merepresentasikan sistem keasramaan di Institut Teknologi Del. Pada ujian kali ini anda akan meneruskan pengembangan simulator dengan menambahkan sebuah fitur tambahan.

## Case Study

Di Institut Teknologi Del, mahasiswa hidup bersama dalam lingkungan asrama. Setiap mahasiswa ditempatkan dalam fasilitas asrama yang nyaman dan asri. Terdapat beberapa asrama yang disediakan untuk mahasiswa pria dan wanita.

## Leaving the Dorm (f01_01.c, 100pts)

Pada akhir masa studi, mahasiswa yang dinyatakan lulus akan meninggalkan kampus dan meninggalkan asrama. Tugas anda adalah mengembangkan fitur yang merepresentasikan hal tersebut.

Untuk melakukan prosedur meninggalkan asrama, pengguna akan memberikan sebuah perintah ke dalam simulator dengan format berikut.

```bash
student-leave#<student-id>
```

Simulator tidak memberikan keluaran apapun ke STDOUT. Perhatikan contoh berikut.

```bash
student-add#12S21001#Dhino Turnip#2021#male
student-add#12S21002#Marudut Tampubolon#2021#male
student-add#12S21003#Jusas Tampubolon#2021#male
student-add#12S21004#Estomihi pangaribuan#2021#male
student-add#12S21006#Weny Sitinjak#2021#female
student-add#12S21007#Dame Sitinjak#2021#female
student-add#12S21008#Tuani Manurung#2021#male
dorm-add#Antiokia#5#male
dorm-add#Kapernaum#5#male
dorm-add#Pniel#5#female
assign-student#12S21001#Antiokia
assign-student#12S21002#Antiokia
assign-student#12S21003#Antiokia
assign-student#12S21004#Antiokia
assign-student#12S21006#Pniel
assign-student#12S21007#Pniel
assign-student#12S21008#Antiokia
student-print-all-detail
student-leave#12S21007
student-leave#12S21004
student-print-all-detail
---

```

Simulator kemudian akan memberi keluaran berikut.

```bash
12S21001|Dhino Turnip|2021|male|Antiokia
12S21002|Marudut Tampubolon|2021|male|Antiokia
12S21003|Jusas Tampubolon|2021|male|Antiokia
12S21004|Estomihi pangaribuan|2021|male|Antiokia
12S21006|Weny Sitinjak|2021|female|Pniel
12S21007|Dame Sitinjak|2021|female|Pniel
12S21008|Tuani Manurung|2021|male|Antiokia
12S21001|Dhino Turnip|2021|male|Antiokia
12S21002|Marudut Tampubolon|2021|male|Antiokia
12S21003|Jusas Tampubolon|2021|male|Antiokia
12S21004|Estomihi pangaribuan|2021|male|left
12S21006|Weny Sitinjak|2021|female|Pniel
12S21007|Dame Sitinjak|2021|female|left
12S21008|Tuani Manurung|2021|male|Antiokia

```

**Note**

1. Anda diperbolehkan untuk mengubah dan menambahkan fungsi yang relevan tentu saja pada library yang sesuai. Lebih jauh, anda juga diperbolehkan untuk mengubah atau menambah definisi struct dan enum yang dipandang perlu.
2. Hardcoded output akan mendiskualitifkasi nilai tugas.

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

1. f01_01.c
2. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
