# T09 Pointer to Function

Tugas terstruktur ini merupakan kelanjutan dari pekerjaan anda sebelumnya (```T08```). Secara khusus pada tugas ini anda diminta untuk mengembangkan solusi sebelumnya dengan mengaplikasikan konsep pointer to function. Solusi yang tidak mengaplikasikan konsep dynamic memory allocation dan pointer to function akan dianulir seluruh penilaiannya.

## Task 1: Printing in Detail (09_01.c, 40pts)

Pada tugas sebelumnya, anda telah memiliki dua buah fitur untuk menampilkan data mahasiswa (```student```) dan asrama (```dorm```). Kedua fungsi tersebut ditujukan untuk menampilkan informasi dari entitas tanpa memperhatikan relasinya dengan entitas lain. Sebagai contoh, perintah ```student-print-all``` akan menampilkan informasi dari entitas mahasiswa (```student```) dan meninggalkan informasi di asrama (```dorm```) mana mahasiswa ditempatkan. Demikian juga dengan ```dorm-print-all``` tidak menampilkan informasi berapa mahasiswa yang telah ditempatkan di sana.

Pada tugas ini, anda diminta untuk mengembangkan dua buah fitur tambahan untuk menampilkan kedua entitas: mahasiswa (```student```) dan asrama (```dorm```) namun dengan memperhatikan informasi lain yang relevan.

### Task 1.a: Printing Student Data in Detail (20pts).

Berikut adalah format perintah yang digunakan:

```bash
student-print-all-detail
```

Perintah di atas akan memberikan keluaran dengan format berikut.

```bash
<student-id>|<student-name>|<year>|<gender>|<dorm-name>
```

Pada keluaran, tampilkan nama asrama (```dorm name```) di mana mahasiswa ditempatkan. Bila belum ditempatkan di asrama manapun, tuliskan ```unassigned```.

### Task 1.b: Printing Dorm Data in Detail (20pts).

Berikut adalah format perintah yang digunakan:

```bash
dorm-print-all-detail
```

Perintah di atas akan memberikan keluaran dengan format berikut.

```bash
<student-id>|<student-name>|<year>|<gender>|<dorm-name>
```

Pada keluaran, tampilkan jumlah mahasiswa yang ditampatkan di sana (```number of resident```). Bila belum ada satupun mahasiswa ditempatkan di pada suatu asrama, tuliskan ```0```.

Perhatikan contoh berikut.

**Input**:
```bash
student-add#12S21001#Dhino Turnip#2021#male
student-add#12S21002#Marudut Tampubolon#2021#male
student-add#12S21003#Jusas Tampubolon#2021#male
student-add#12S21004#Estomihi pangaribuan#2021#male
student-print-all-detail
student-add#12S21006#Weny Sitinjak#2021#female
student-add#12S21007#Dame Sitinjak#2021#female
student-add#12S21008#Tuani Manurung#2021#male
student-add#12S21009#Mikhael Pakpahan#2021#male
student-add#12S21010#Bobby Siagian#2021#male
student-print-all
student-add#12S21011#Aldi Simamora#2021#male
student-print-all-detail
---

```

**output**:
```bash
12S21001|Dhino Turnip|2021|male|unassigned
12S21002|Marudut Tampubolon|2021|male|unassigned
12S21003|Jusas Tampubolon|2021|male|unassigned
12S21004|Estomihi pangaribuan|2021|male|unassigned
12S21001|Dhino Turnip|2021|male
12S21002|Marudut Tampubolon|2021|male
12S21003|Jusas Tampubolon|2021|male
12S21004|Estomihi pangaribuan|2021|male
12S21006|Weny Sitinjak|2021|female
12S21007|Dame Sitinjak|2021|female
12S21008|Tuani Manurung|2021|male
12S21009|Mikhael Pakpahan|2021|male
12S21010|Bobby Siagian|2021|male
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

```

## Task 2: Assigning Students into Dorms (09_02.c, 20pts)

Tugas berikutnya adalah mengembangkan sebuah fitur untuk menempatkan mahasiswa (```student```) ke asrama (```dorm```). Perlu diperhatikan bahwa penempatan hanya dapat dilakukan bila:
1. Masih tersedia ruang pada asrama tujuan atau jumlah mahasiswa yang ditempatkan di sana masih di bawah kapasitas.
2. Jenis kelamin mahasiswa sesuai dengan peruntukan di asrama tujuan. Mahasiswa pria (```male```) hanya dapat ditempatkan di asrama yang diperuntukan untuk pria.

Berikut adalah format perintah yang digunakan untuk menempatkan seorang mahasiswa ke suatu asrama.

```bash
assign-student#<student-id>#<dorm-name>
```

Implementasi fitur ini dalam sebuah fungsi yang menerima dua buah parameter: mahasiswa (```student```) dan asrama (```dorm```) tujuan.

Perintah di atas tidak memberikan keluaran apapun.

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
dorm-add#Antiokia#5#male
dorm-add#Mamre#5#male
dorm-add#Silo#5#male
dorm-add#Mahanaim#5#male
dorm-add#Nazaret#5#male
dorm-add#Pniel#5#female
dorm-add#Kapernaum#5#male
student-print-all-detail
dorm-print-all-detail
assign-student#12S21001#Antiokia
assign-student#12S21002#Antiokia
assign-student#12S21003#Antiokia
assign-student#12S21004#Antiokia
assign-student#12S21006#Pniel
assign-student#12S21007#Pniel
assign-student#12S21008#Antiokia
assign-student#12S21009#Antiokia
assign-student#12S21010#Antiokia
assign-student#12S21011#Antiokia
student-print-all-detail
dorm-print-all-detail
---

```

**output**:
```bash
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
Pniel|5|female|0
Kapernaum|5|male|0
12S21001|Dhino Turnip|2021|male|Antiokia
12S21002|Marudut Tampubolon|2021|male|Antiokia
12S21003|Jusas Tampubolon|2021|male|Antiokia
12S21004|Estomihi pangaribuan|2021|male|Antiokia
12S21006|Weny Sitinjak|2021|female|Pniel
12S21007|Dame Sitinjak|2021|female|Pniel
12S21008|Tuani Manurung|2021|male|Antiokia
12S21009|Mikhael Pakpahan|2021|male|unassigned
12S21010|Bobby Siagian|2021|male|unassigned
12S21011|Aldi Simamora|2021|male|unassigned
Antiokia|5|male|5
Mamre|5|male|0
Silo|5|male|0
Mahanaim|5|male|0
Nazaret|5|male|0
Pniel|5|female|2
Kapernaum|5|male|0

```

## Task 3: Moving Student into Another Dorm (09_03.c, 40pts)

Tugas berikutnya adalah mengembangkan sebuah fitur untuk memindahkan mahasiswa (```student```) ke asrama (```dorm```) lain. Perlu diperhatikan bahwa aturan pada ```Task 2``` tetap berlaku pada tugas ini.

Implementasi fitur ini dalam sebuah fungsi yang menerima dua buah parameter: mahasiswa (```student```) dan asrama (```dorm```) tujuan.

Hal yang perlu diperhatikan:
1. Bila mahasiswa yang akan dipindahkan **belum pernah** ditempatkan pada asrama manapun, maka jalankan fitur pada ```Task 2```.
2. Bila mahasiswa yang akan dipindahkan **sudah ditempatkan** pada suatu asrama, maka asrama yang ditinggalkan harus menyesuaikan jumlah penghuninya.

Berdasarkan informasi di atas, kembangkanlah suatu pendekatan yang mengaplikasikan konsep ```pointer to function```. Function pointer akan merujuk ke fungsi yang dihasilkan pada ```Task 2``` bila kondisi pertama terpenuhi, sebaliknya akan merujuk pada fungsi yang dihasilkan pada ```Task 3```. Pada laporan, harap untuk menunjukkan aplikasi ```pointer to function```.

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
dorm-add#Antiokia#5#male
dorm-add#Mamre#5#male
dorm-add#Silo#5#male
dorm-add#Mahanaim#5#male
dorm-add#Nazaret#5#male
dorm-add#Pniel#5#female
dorm-add#Kapernaum#5#female
student-print-all-detail
dorm-print-all-detail
assign-student#12S21001#Antiokia
assign-student#12S21002#Antiokia
assign-student#12S21003#Antiokia
assign-student#12S21004#Antiokia
assign-student#12S21006#Pniel
assign-student#12S21007#Pniel
assign-student#12S21008#Antiokia
assign-student#12S21009#Antiokia
assign-student#12S21010#Antiokia
assign-student#12S21011#Antiokia
move-student#12S21009#Nazaret
move-student#12S21010#Nazaret
move-student#12S21011#Nazaret
move-student#12S21001#Mahanaim
move-student#12S21007#Nazaret
move-student#12S21007#Kapernaum
student-print-all-detail
dorm-print-all-detail
---

```

**output**:
```bash
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
Pniel|5|female|0
Kapernaum|5|female|0
12S21001|Dhino Turnip|2021|male|Mahanaim
12S21002|Marudut Tampubolon|2021|male|Antiokia
12S21003|Jusas Tampubolon|2021|male|Antiokia
12S21004|Estomihi pangaribuan|2021|male|Antiokia
12S21006|Weny Sitinjak|2021|female|Pniel
12S21007|Dame Sitinjak|2021|female|Kapernaum
12S21008|Tuani Manurung|2021|male|Antiokia
12S21009|Mikhael Pakpahan|2021|male|Nazaret
12S21010|Bobby Siagian|2021|male|Nazaret
12S21011|Aldi Simamora|2021|male|Nazaret
Antiokia|5|male|4
Mamre|5|male|0
Silo|5|male|0
Mahanaim|5|male|1
Nazaret|5|male|3
Pniel|5|female|1
Kapernaum|5|female|1

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

1. t09_01.c
2. t09_02.c
3. t09_03.c
4. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
