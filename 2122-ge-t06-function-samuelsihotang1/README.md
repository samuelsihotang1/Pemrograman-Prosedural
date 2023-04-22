## Function
Pada tugas kali ini anda akan mengembangkan beberapa fungsi dengan spesifikasi yang telah ditentukan.

### StudentDormitory
Butet baru saja bertemu dengan salah seorang dosen pemrograman yang memintanya untuk mengembangkan suatu program sederhana untuk mensimulasikan entitas-entitas di lingkungan kampus. Sebenarnya, sang dosen telah mengembangkan desain dasar dari simulator dan Butet hanya diminta untuk mengimplementasikannya. Sebagai langkah awal, simulator hanya akan menangani entitas mahasiswa (```student```), dan asrama (```dormitory```).

Berikut adalah rincian entitas dalam simulator:
1. Seorang ```student``` memiliki NIM (```id```), nama mahasiswa (```name```), angkatan (```year```),  program studi (```study program```), dan jenis kelamin (```gender```).
2. Sebuah ```dormitory``` memiliki nama asrama (```dormitory_name```), kapasitas atau muatan asrama (```capacity```), status (```status```), tipe asrama (```type```) dan jumlah penghuni (```residents```).
3. Terdapat dua status asrama, yaitu: ```Availabel``` apabila ```capacity > residents``` dan ```Not Available``` apabila ```capacity < residents```.
4. Setiap mahasiswa ditempatkan ke asrama berdasarkan yang berbeda berdasarkan jenis kelamin masing-masing mahasiswa. 

Simulator diharapkan memiliki fitur-fitur dasar sebagai berikut:
1. Menampilkan informasi dari seorang ```student``` ke ```stdout``` dan asrama ```dormitory``` yang akan di tempati masing-masing mahasiswa dengan menggunakan fungsi ```assign_students(...)```.
2. Menampilkan informasi penghuni (```mahasiswa```) yang tinggal di setiap asrama ```dormitory```. 
3. Menampilkan informasi  asrama ```dormitory``` dengan jumlah yang masih ```Available``` dan ```Not Available``` untuk dihuni mahasiswa.

Memperhatikan kompleksitas persoalan, Butet kemudian meminta bantuan dari sang sahabat, Ucok. Setelah mendengar penjelasan Butet, tanpa berpikir dua kali, ia pun bersedia membantu.

### Output Formats
Berikut adalah format keluaran untuk setiap upaya menampilkan informasi dari entitas:
1. ```assign_students(...)``` akan menampilkan untuk ```students``` id, nama mahasiswa, angkatan, program studi dan jenis kelamin dan untuk ```dormitory``` nama asrama, capacity, status dan type. Masing-masing data tersebut ditulis dalam satu baris keluaran dengan simbol hashtag ```#``` sebagai separator.
2. ```print_students_dorm(...)``` akan menampilkan nama asrama, kapasitas asrama, status dan tipe asrama. Keempat data tersebut ditulis dalam satu baris keluaran dengan simbol hashtag ```#``` sebagai separator.


### Compilation
Proses kompilasi harus menyertakan program dan ```StudentDormitory.c``` yang berisi implementasi dari spesifikasi. Berikut ini adalah contoh perintah untuk mengkompilasi ```t06_01.c```.
```
> gcc t06_01.c StudentDormitory.c -o t06_01
```
Dari kompilasi akan dihasilkan sebuah berkas executable ```t06_01```.

### Case 1 (t06_01.c, 20 points)
Berikut adalah keluaran yang diharapkan.
```
Students:
12S20999#Wiro Sableng#2020#Information Systems#MALE
12S18019#Novita Hutapea#2018#Information Systems#FEMALE
12S19023#Irfan Siregar#2019#Information Systems#MALE
12S20030#Lamsihar Siahaan#2020#Information Systems#FEMALE
12S21056#Endang Siregar#2021#Information Systems#FEMALE
11319002#Asido Agripo Panjaitan#2019#Information Technology#MALE
11319014#Alex Sander Hutapea#2019#Information Technology#MALE
13319004#Sotar Dodo#2019#Computer Technology#MALE
21S20031#Aldi Sitorus#2020#Engineering Management#MALE
31S20020#Friskila Ariyanty#2020#Bioprocess Engineering#FEMALE

Dorms:
Pniel#10#Available#For Female
Silo#10#Available#For Male
Kapernaum#10#Available#For Male
Mamre#10#Available#For Female

```
### Case 2 (t06_02.c, 40 points)
Berikut adalah keluaran yang diharapkan.
```
Students:
12S20999#Wiro Sableng#2020#Information Systems#MALE
12S18019#Novita Hutapea#2018#Information Systems#FEMALE
12S19023#Irfan Siregar#2019#Information Systems#MALE
12S20030#Lamsihar Siahaan#2020#Information Systems#FEMALE
12S21056#Endang Siregar#2021#Information Systems#FEMALE
11319002#Asido Agripo Panjaitan#2019#Information Technology#MALE
11319014#Alex Sander Hutapea#2019#Information Technology#MALE
13319004#Sotar Dodo#2019#Computer Technology#MALE
21S20031#Aldi Sitorus#2020#Engineering Management#MALE
31S20020#Friskila Ariyanty#2020#Bioprocess Engineering#FEMALE

Dorms:
Pniel#10#Available#For Female
Silo#10#Available#For Male
Kapernaum#10#Available#For Male
Mamre#10#Available#For Female

Pniel#6#Available#For Female
12S18019#Novita Hutapea#2018#Information Systems
12S20030#Lamsihar Siahaan#2020#Information Systems
12S21056#Endang Siregar#2021#Information Systems
31S20020#Friskila Ariyanty#2020#Bioprocess Engineering

Silo#4#Available#For Male
12S20999#Wiro Sableng#2020#Information Systems
12S19023#Irfan Siregar#2019#Information Systems
11319002#Asido Agripo Panjaitan#2019#Information Technology
11319014#Alex Sander Hutapea#2019#Information Technology
13319004#Sotar Dodo#2019#Computer Technology
21S20031#Aldi Sitorus#2020#Engineering Management

Kapernaum#10#Available#For Male
0

Mamre#10#Available#For Female
0

```
### Case 3 (t06_03.c, 40 points)
Berikut adalah keluaran yang diharapkan.
```
Students:
12S20999#Wiro Sableng#2020#Information Systems#MALE
12S18019#Novita Hutapea#2018#Information Systems#FEMALE
12S19023#Irfan Siregar#2019#Information Systems#MALE
12S20030#Lamsihar Siahaan#2020#Information Systems#FEMALE
12S21056#Endang Siregar#2021#Information Systems#FEMALE
11319002#Asido Agripo Panjaitan#2019#Information Technology#MALE
11319014#Alex Sander Hutapea#2019#Information Technology#MALE
13319004#Sotar Dodo#2019#Computer Technology#MALE
21S20031#Aldi Sitorus#2020#Engineering Management#MALE
31S20020#Friskila Ariyanty#2020#Bioprocess Engineering#FEMALE

Dorms:
Pniel#3#Available#For Female
Silo#3#Available#For Male
Kapernaum#3#Available#For Male
Mamre#3#Available#For Female

Pniel#0#Not Available#For Female
12S18019#Novita Hutapea#2018#Information Systems
12S20030#Lamsihar Siahaan#2020#Information Systems
12S21056#Endang Siregar#2021#Information Systems

Silo#0#Not Available#For Male
12S20999#Wiro Sableng#2020#Information Systems
12S19023#Irfan Siregar#2019#Information Systems
11319002#Asido Agripo Panjaitan#2019#Information Technology

Kapernaum#0#Not Available#For Male
11319014#Alex Sander Hutapea#2019#Information Technology
13319004#Sotar Dodo#2019#Computer Technology
21S20031#Aldi Sitorus#2020#Engineering Management

Mamre#2#Available#For Female
31S20020#Friskila Ariyanty#2020#Bioprocess Engineering

```


## Reporting

Presentasikan pekerjaan anda dalam sebuah video. Pada presentasi:
1. Definisikan fungsi yang dikembangkan sebagai usulan solusi tugas ini. 
2. Berikan dasar pemikiran anda mengenai usulan solusi tersebut.
3. Jabarkan solusi anda.

**Note**: Semakin tajam argumen dan penjabaran anda semakin mudah penilaian dilakukan.

**Kriteria Video Presentasi**:
+ 1080p/30fps, min. 10 menit.
+ Suara jernih dan dapat dengan jelas terdengar.
+ Posting video anda di YouTube, di-set "Not For Kids" dengan visibility Unlisted.


## Submission
1. StudentDormitory.c
2. changelog.txt

## How to submit?
Please see https://youtu.be/g0BQ195-aWo
