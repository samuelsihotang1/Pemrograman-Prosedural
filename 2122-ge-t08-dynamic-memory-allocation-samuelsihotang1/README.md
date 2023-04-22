# T08 Dynamic Memory Allocation

Tugas terstruktur ini merupakan kelanjutan dari pekerjaan anda sebelumnya. Secara khusus pada tugas ini anda diminta untuk mengembangkan solusi sebelumnya dengan pendekatan dynamic allocation. Oleh sebab itu, pengembangan secara statis akan menganulir seluruh penilaian dari submission.

## Case Study: A Dynamic Refreshing Dorms

Tugas sebelumnya mengahadirkan tantangan tersendiri, yakni sifat deterministik dari asrama (```dorm```) dan mahasiswa (```student```) yang dapat diantisipasi oleh solusi. Sekalipun dapat dilakukan pemesanan ruang dengan kapasitas besar sedari awal, pendekatan ini sangat tidak efisian dan tidak bijaksana dalam pemanfaatan ruang memory. Oleh sebab itu, pada tugas ini anda diminta untuk mengembangkan solusi yang dinamis.

Untuk memenuhi kebutuhan tersebut, maka perilaku solusi perlu diubah menjadi sebagai berikut:
1. Solusi akan secara terus-menerus dan interaktif menerima input dari ```stdin``` dan memberikan keluaran ke ```stdout```.
2. Solusi akan berhenti beroperasi bila diberi masukan berupa ```---```.

## Codebase

Saat ini telah disediakan beberapa berkas pada subdirektori ```libs```, di antaranya:
+ ```gender.h``` berisi definisi dasar terkait jenis kelamin. Terdapat dua jenis kelamin yaitu pria (```male```) dan wanita (```female```).
+ ```dorm.h``` berisi definisi dasar terkait asrama. Terdapat beberapa atribut untuk mendeskripsikan sebuah asrama yaitu nama asrama (```name```), kapasitas asrama (```capacity```), jenis kelamin dari mahasiswa yang diperbolehkan menghuni asrama (```gender```), serta keterisian asrama (```residents number```).
+ ```student.h``` berisi definisi dasar terkait mahasiswa. Beberapa atribut yang telah didefinisikan yaitu nomor induk mahasiswa (```id```), nama mahasiswa (```name```), angkatan atau tahun masuk (```year```), jenis kelamin (```gender```), dan asrama di mana mahasiswa ditempatkan (```dorm```).

Selain itu, juga telah disediakan berkas ```gender.c```, ```dorm.c```, dan ```student.c```.

## Tugas 1. Create and Display Student (t08_01.c, 40 points)

Pada bagian ini, anda diminta untuk mengembangkan fitur untuk memasukan data mahasiswa ke dalam solusi. Untuk memasukkan data seorang mahasiswa dipergunakan format berikut:

```bash
student-add#<student-id>#<student-name>#<year>#<gender>
```

Solusi tidak memberikan keluaran apa pun ke ```stdout``` setelah melakukan operasi ini.

Berikutnya, kembangkan sebuah fitur yang akan menampilkan seluruh data mahasiswa (```student```) yang tersimpan di dalam solusi. Berikut adalah format masukan yang diberikan:

```bash
student-print-all
```

Solusi kemudian akan menampilkan seluruh data mahasiswa (```student```) ke ```stdout```. Data seorang mahasiswa akan ditampilkan dalam satu baris keluaran dengan format berikut.

```bash
<student-id>|<student-name>|<year>|<gender>
```

Bila tidak terdapat data mahasiswa dalam solusi, maka fitur tidak akan memberi keluaran ke ```stdout```.

Perhatikan contoh berikut.

**Input**:
```bash
student-add#12S21001#Dhino Turnip#2021#male
student-add#12S21002#Marudut Tampubolon#2021#male
student-add#12S21003#Jusas Tampubolon#2021#male
student-print-all
student-add#12S21004#Estomihi pangaribuan#2021#male
student-add#12S21006#Weny Sitinjak#2021#female
student-add#12S21007#Dame Sitinjak#2021#female
student-add#12S21008#Tuani Manurung#2021#male
student-add#12S21009#Mikhael Pakpahan#2021#male
student-add#12S21010#Bobby Siagian#2021#male
student-add#12S21011#Aldi Simamora#2021#male
student-print-all
---

```

**output**:
```bash
12S21001|Dhino Turnip|2021|male
12S21002|Marudut Tampubolon|2021|male
12S21003|Jusas Tampubolon|2021|male
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

## Tugas 2. Create and Display Dorm (t08_01.c, 60 points)

Pada bagian ini, anda diminta untuk mengembangkan fitur untuk memasukan data asrama ke dalam solusi. Untuk memasukkan data seorang asrama dipergunakan format berikut:

```bash
dorm-add#<dorm-name>#<capacity>#<gender>
```

Solusi tidak memberikan keluaran apa pun ke ```stdout``` setelah melakukan operasi ini.

Berikutnya, kembangkan sebuah fitur yang akan menampilkan seluruh data asrama (```dorm```) yang tersimpan di dalam solusi. Berikut adalah format masukan yang diberikan:

```bash
dorm-print-all
```

Solusi kemudian akan menampilkan seluruh data asrama (```dorm```) ke ```stdout```. Data sebuah asrama akan ditampilkan dalam satu baris keluaran dengan format berikut.

```bash
<dorm-name>|<capacity>|<gender>
```

Bila tidak terdapat data asrama dalam solusi, maka fitur tidak akan memberi keluaran ke ```stdout```.


Perhatikan contoh berikut.

**Input**:
```bash
dorm-add#Pniel#20#female
dorm-add#Kapernaum#20#male
dorm-print-all
dorm-add#Antiokia#20#male
dorm-print-all
---

```

**Output**:
```bash
Pniel|20|female
Kapernaum|20|male
Pniel|20|female
Kapernaum|20|male
Antiokia|20|male

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

1. t08_01.c
2. t08_02.c
3. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
