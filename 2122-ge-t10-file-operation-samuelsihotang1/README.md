# T10 File Operation

Pada tugas terstruktur kali ini anda akan melakukan operasi berkas. Terdapat dua fitur yang saling berelasi. Perlu diperhatikan bahwa fitur-fitur pendahulu harus tetap tersedia dan dapat digunakan.

## Task 1. Loading Initial Data (t10_01.c, 40pts)

Pada tugas-tugas sebelumnya, simulator membaca data dari pengguna secara interaktif. Pada saat dijalankan, simulator tidak memeiliki initial data, kosong, dan diisi seiring interaksi dengan penggunanya. Pada tugas kali ini anda diminta untuk mengembangkan suatu solusi yang akan me-load initial data ke dalam simulator. Dengan demikian, simulator akan memiliki initial data, tidak kosong.

**NOTE**:
1. Data bersumber dari berkas yang disimpan dalam direktori ```storage```.
2. Anda tidak diizinkan untuk mengubah dan menyertakan berkas pada direktori storage ke central repository (GitHub). Tambahkan direktori ini dalam ```.gitignore``` anda. Perhatikan contoh berikut.

Saat ini telah disediakan lima initial data pada:
1. ```./storage/dorm-repository.txt``` untuk data asrama (```dorm```); dan
2. ```./storage/student-repository.txt``` untuk data mahasiswa (```student```).

Kemudian, diberi masukan berikut.

```bash
dorm-print-all-detail
student-print-all-detail
---

```

Simulator kemudian akan memberi keluaran berikut.

```bash
Antiokia|5|male|0
Mamre|5|male|0
Silo|5|male|0
Mahanaim|5|male|0
Nazaret|5|male|0
12S21001|Dhino Turnip|2021|male|unassigned
12S21002|Marudut Tampubolon|2021|male|unassigned
12S21003|Jusas Tampubolon|2021|male|unassigned
12S21004|Estomihi pangaribuan|2021|male|unassigned
12S21006|Weny Sitinjak|2021|female|unassigned

```

## Task 2. Storing Data (t10_02.c, 60pts)

Setelah simulator berakhir eksekusinya, data di dalamnya turut hilang karena sifat volatile dari data yang tersimpan di main memory di mana simulator berada. Tugas anda adalah menyimpan kembali seluruh data asrama (```dorm```) dan mahasiswa (```student```) ke dalam berkas yang relevan. Perlu diingat bahwa tugas ini didasarkan pada ```Task 1```.

Perhatikan contoh berikut dengan menggunakan initial data yang dijabarkan pada ```Task 1```.

```bash
student-add#12S21007#Dame Sitinjak#2021#female
student-add#12S21008#Tuani Manurung#2021#male
student-add#12S21009#Mikhael Pakpahan#2021#male
student-add#12S21010#Bobby Siagian#2021#male
student-add#12S21011#Aldi Simamora#2021#male
student-print-all
dorm-add#Pniel#20#female
dorm-add#Kapernaum#20#male
dorm-print-all
student-print-all-detail
dorm-print-all-detail
---

```

Maka simulator akan meberi keluaran berikut.

```bash
12S21001|Dhino Turnip|2021|male
12S21002|Marudut Tampubolon|2021|male
12S21003|Jusas Tampubolon|2021|male
12S21004|Estomihi pangaribuan|2021|male
12S21006|Weny Sitinjak|2021|female
12S21007|Dame Sitinjak|2021|female
12S21008|Tuani Manurung|2021|male
12S21009|Mikhael Pakpahan|2021|male
12S21010|Bobby Siagian|2021|male
12S21011|Aldi Simamora|2021|male
Antiokia|5|male
Mamre|5|male
Silo|5|male
Mahanaim|5|male
Nazaret|5|male
Pniel|20|female
Kapernaum|20|male
12S21001|Dhino Turnip|2021|male|unassigned
12S21002|Marudut Tampubolon|2021|male|unassigned
12S21003|Jusas Tampubolon|2021|male|unassigned
12S21004|Estomihi pangaribuan|2021|male|unassigned
12S21006|Weny Sitinjak|2021|female|unassigned
12S21007|Dame Sitinjak|2021|female|unassigned
12S21008|Tuani Manurung|2021|male|unassigned
12S21009|Mikhael Pakpahan|2021|male|unassigned
12S21010|Bobby Siagian|2021|male|unassigned
12S21011|Aldi Simamora|2021|male|unassigned
Antiokia|5|male|0
Mamre|5|male|0
Silo|5|male|0
Mahanaim|5|male|0
Nazaret|5|male|0
Pniel|20|female|0
Kapernaum|20|male|0

```

Selain itu, simulator juga akan menulis seluruh data yang ia miliki ke dalam berkas. Berikut adalah contoh berkas ```./storage/student-repository.txt```. Perlu diperhatikan, hal yang serupa juga dilakukan terhadap data asrama (```dorm```).

```bash
12S21001|Dhino Turnip|2021|male
12S21002|Marudut Tampubolon|2021|male
12S21003|Jusas Tampubolon|2021|male
12S21004|Estomihi pangaribuan|2021|male
12S21006|Weny Sitinjak|2021|female
12S21007|Dame Sitinjak|2021|female
12S21008|Tuani Manurung|2021|male
12S21009|Mikhael Pakpahan|2021|male
12S21010|Bobby Siagian|2021|male
12S21011|Aldi Simamora|2021|male

```

**Note**

1. Tuliskan semua fungsionalitas terkait operasi berkas pada ```repository.h``` dan ```repository.c```. Anda diizinkan untuk melakukan modifikasi pada source code 
2. Anda diperbolehkan untuk mengubah dan menambahkan fungsi yang relevan tentu saja pada library yang sesuai. Meski demikian, anda **tidak** diperbolehkan mengubah struct maupun enum!
3. Hardcoded output akan mendiskualitifkasi nilai tugas.

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

1. t10_01.c
2. t10_02.c
3. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
