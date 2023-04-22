# T07 Indirection

Pada sesi ini anda diminta untuk menyelesaikan sebuah persoalan yang akan mengasah pengetahuan serta keterampilan anda dalam menerapkan konsep function dan indirection.

## Case Study: A Refreshing Dorms

Di Institut Teknologi Del, mahasiswa hidup bersama dalam lingkungan asrama. Setiap mahasiswa ditempatkan dalam fasilitas asrama yang nyaman dan asri. Terdapat beberapa asrama yang disediakan untuk mahasiswa pria dan mahasiswa wanita. Penempatan mahasiswa ke dalam asrama tidak boleh melebihi kapasitas. Dengan demikian, kenyamanan penghuni asrama dapat dijaga.

Tugas anda pada sesi ini adalah merepresentasikan studi kasus di atas. Sebagian dari codebase sudah disajikan dan menjadi bagian anda untuk melengkapi.

## Codebase

Saat ini telah disediakan beberapa berkas pada subdirektori ```libs```, di antaranya:
+ ```gender.h``` berisi definisi dasar terkait jenis kelamin. Terdapat dua jenis kelamin yaitu pria (```male```) dan wanita (```female```).
+ ```dorm.h``` berisi definisi dasar terkait asrama. Terdapat beberapa atribut untuk mendeskripsikan sebuah asrama yaitu nama asrama (```name```), kapasitas asrama (```capacity```), jenis kelamin dari mahasiswa yang diperbolehkan menghuni asrama (```gender```), serta keterisian asrama (```residents number```).
+ ```student.h``` berisi definisi dasar terkait mahasiswa. Beberapa atribut yang telah didefinisikan yaitu nomor induk mahasiswa (```id```), nama mahasiswa (```name```), angkatan atau tahun masuk (```year```), jenis kelamin (```gender```), dan asrama di mana mahasiswa ditempatkan (```dorm```).

Selain itu, juga telah disediakan berkas ```gender.c```, ```dorm.c```, dan ```student.c```.

## Tugas 1. Create and Display (t07_01.c, 40 points)

Pada tugas ini anda diminta untuk mendefinisikan empat buah fungsi, di antaranya:
1. Sebuah factory function untuk membentuk objek asrama (```dorm```). Fungsi ini menerima semua atribut yang relevan untuk mendefinisikan ```dorm``` dalam bentuk formal parameter dan mengembalikan sebuah objek ```dorm```.
2. Sebuah factory function untuk membentuk objek mahasiswa (```student```). Fungsi ini menerima semua atribut yang relevan untuk mendefinisikan ```student``` dalam bentuk formal parameter dan mengembalikan sebuah objek ```student```.
3. Sebuah fungsi untuk mencetak sebuah objek ```dorm```. Fungsi ini akan menerima sebuah objek ```dorm``` dalam bentuk formal parameter. Berikut adalah format luaran yang diharapkan:
   
   ```bash
   <dorm name>|<capacity>|<accepted gender>|<residents>
   ---
   Kapernaum|3|male|0
   ```

4. Sebuah fungsi untuk mencetak sebuah objek ```student```. Fungsi ini akan menerima sebuah objek ```student``` dalam bentuk formal parameter. Berikut adalah format luaran yang diharapkan:
   
   ```bash
   <student id>|<student name>|<year>|<gender>|<dorm name>
   ---
   12S21010|Bobby Siagian|2021|male|unassigned
   ```

**Output**

Berikut adalah contoh keluaran pada saat ```t07_01``` dieksekusi.

```bash
Pniel|4|female|0
Kapernaum|3|male|0
12S21001|Dhino Turnip|2021|male|unassigned
12S21006|Weny Sitinjak|2021|female|unassigned
12S21010|Bobby Siagian|2021|male|unassigned

```

## Tugas 2. Dorm Assignment (t07_02.c, 60 points)

Tugas berikutnya, anda diminta untuk mengembangkan sebuah fungsi yang digunakan untuk menempatkan seorang mahasiswa ke dalam suatu asrama. Agar diperhatikan bahwa penempatan harus memenuhi dua syarat berikut:
1. Asrama tujuan ditujukan untuk mahasiswa dengan jenis kelamin yang sesuai. Asrama wanita hanya boleh ditempati oleh mahasiswa wanita, demikian juga sebaliknya.
2. Kapasitas asrama belum terpenuhi (```number of residents``` < ```dorm capacity```).

Pada saat kedua syarat tidak terpenuhi, maka penempatan mahasiswa dibatalkan.

Untuk melakukan operasi penempatan, fungsi akan menerima objek ```student``` dan ```dorm```.

Selanjutnya, gunakan fungsi tersebut pada ```t07_02.c``` pada section yang telah ditentukan. Pada laporan, silakan untuk menjabarkan bagian ini dengan rinci.

**Output**

Berikut adalah contoh keluaran pada saat ```t07_01``` dieksekusi.

```bash
Pniel|4|female|0
Kapernaum|3|male|0
12S21001|Dhino Turnip|2021|male|unassigned
12S21006|Weny Sitinjak|2021|female|unassigned
12S21010|Bobby Siagian|2021|male|unassigned
12S21001|Dhino Turnip|2021|male|Kapernaum
12S21002|Marudut Tampubolon|2021|male|Kapernaum
12S21003|Jusas Tampubolon|2021|male|Kapernaum
12S21004|Estomihi pangaribuan|2021|male|unassigned
12S21006|Weny Sitinjak|2021|female|Pniel
12S21007|Dame Sitinjak|2021|female|Pniel
12S21008|Tuani Manurung|2021|male|unassigned
12S21009|Mikhael Pakpahan|2021|male|unassigned
12S21010|Bobby Siagian|2021|male|unassigned
12S21011|Aldi Simamora|2021|male|unassigned
Pniel|4|female|2
Kapernaum|3|male|3

```

## Notes:

1. Anda diizinkan untuk memodifikasi semua berkas pada codebase, baik header files maupun source files.
2. Hardcoded output akan mendiskualitifkasi nilai GHC.

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

1. t07_01.c
2. t07_02.c
3. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
