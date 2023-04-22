# q02 Reverted

Pada kuis kali ini anda diminta untuk menambahkan sebuah fitur ke dalam ```Student-Dorm```. Perlu diperhatikan bahwa fitur-fitur pendahulu harus tetap tersedia dan dapat digunakan.

## Reverting (q02_01.c, 100pts)

Pada situasi tertentu, suatu asrama (```dorm```) perlu untuk dikosongkan. Misal, untuk keperluan renovasi, persiapan fasilitas karantina, dsb. Mahasiswa penghuni asrama tersebut kemudian akan direalokasi ulang ke asrama lainnya. Untuk keperluan ini, kembangkan sebuah fitur yang memampukan ```Student-Dorm``` untuk mengosongkan suatu asrama. Untuk saat ini, mahasiswa yang menghuni asrama tersebut akan di-set ```unassigned``` sampai nantinya direalokasi kembali. Berikut adalah format perintah yang digunakan:

```bash
dorm-empty#<dorm-name>
```

Perintah di atas tidak memberikan keluaran apapun ke ```STDOUT```.

Perhatikan contoh berikut.

**Input**:
```bash
student-add#12S21001#Dhino Turnip#2021#male
student-add#12S21002#Marudut Tampubolon#2021#male
student-add#12S21003#Jusas Tampubolon#2021#male
student-add#12S21004#Estomihi pangaribuan#2021#male
student-add#12S21006#Weny Sitinjak#2021#female
student-add#12S21007#Dame Sitinjak#2021#female
student-add#12S21008#Tuani Manurung#2021#male
student-add#12S21009#Mikhael Pakpahan#2021#male
student-add#12S21010#Bobby Siagian#2021#male
student-add#12S21011#Aldi Simamora#2021#male
dorm-add#Antiokia#20#male
dorm-add#Mamre#20#male
assign-student#12S21001#Antiokia
assign-student#12S21002#Antiokia
assign-student#12S21003#Antiokia
assign-student#12S21004#Antiokia
assign-student#12S21005#Antiokia
assign-student#12S21006#Mamre
assign-student#12S21007#Mamre
assign-student#12S21008#Mamre
assign-student#12S21009#Mamre
assign-student#12S21010#Mamre
student-print-all-detail
dorm-print-all-detail
dorm-empty#Antiokia
student-print-all-detail
dorm-print-all-detail
---

```

**output**:
```bash
12S21001|Dhino Turnip|2021|male|Antiokia
12S21002|Marudut Tampubolon|2021|male|Antiokia
12S21003|Jusas Tampubolon|2021|male|Antiokia
12S21004|Estomihi pangaribuan|2021|male|Antiokia
12S21006|Weny Sitinjak|2021|female|unassigned
12S21007|Dame Sitinjak|2021|female|unassigned
12S21008|Tuani Manurung|2021|male|Mamre
12S21009|Mikhael Pakpahan|2021|male|Mamre
12S21010|Bobby Siagian|2021|male|Mamre
12S21011|Aldi Simamora|2021|male|unassigned
Antiokia|20|male|4
Mamre|20|male|3
12S21001|Dhino Turnip|2021|male|unassigned
12S21002|Marudut Tampubolon|2021|male|unassigned
12S21003|Jusas Tampubolon|2021|male|unassigned
12S21004|Estomihi pangaribuan|2021|male|unassigned
12S21006|Weny Sitinjak|2021|female|unassigned
12S21007|Dame Sitinjak|2021|female|unassigned
12S21008|Tuani Manurung|2021|male|Mamre
12S21009|Mikhael Pakpahan|2021|male|Mamre
12S21010|Bobby Siagian|2021|male|Mamre
12S21011|Aldi Simamora|2021|male|unassigned
Antiokia|20|male|0
Mamre|20|male|3

```

## Notes:

1. Anda diperbolehkan untuk mengubah dan menambahkan fungsi yang relevan tentu saja pada library yang sesuai. Meski demikian, anda **tidak** diperbolehkan mengubah struct maupun enum!
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

1. q02_01.c
4. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
