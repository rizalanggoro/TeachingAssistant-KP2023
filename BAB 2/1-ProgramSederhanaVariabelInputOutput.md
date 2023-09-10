# 2.1 - Pengantar (Program Sederhana, Variabel, dan Input/Output)

Contoh program sederhana, pengenalan variabel, dan input/output sederhana.

## Contoh Program Sederhana

Ketika kita mulai belajar tentang bahasa pemrograman khususnya bahasa C, program yang akan teman-teman kenal pertama kali adalah _program hello world_ seperti berikut ini.

```c
// menambahkan library stdio.h
#include <stdio.h>

int main() {
  printf("Hello world!");
  return 0;
}
```

### Memahami Program Hello World

Mari kita pahami masing-masing baris dari program hello world tersebut.

```c
#include <stdio.h>
```

Perintah `#include` merupakan perintah untuk meng-include atau menambahkan library yang akan digunakan pada program yang kita buat. Selanjutnya, perintah `#include` tersebut biasanya diikut dengan nama library yang akan kita gunakan, sebagai contoh pada kode tersebut adalah `stdio.h`. Library `stdio.h` merupakan library bawaan bahasa C yang di dalamnya terdapat banyak fungsi, salah satunya adalah fungsi `printf()`. Oleh karena itu, ketika kita ingin menggunakan fungsi `printf()` diharuskan untuk meng-include library `stdio.h`.

> Catatan:
> Baris kode di atas sering disebut dengan preprocessor directive. Baris kode tersebut berbeda dengan baris kode C pada umumnya. Preprocessor directive tidak memerlukan titik koma ( ; ) pada akhir barisnya.

<br />

```c
int main() {
  // ... kode lainnya
}
```

Selanjutnya, kode di atas adalah fungsi `main()` atau fungsi utama dalam sebuah program C. Fungsi `main` tersebut akan dijalankan pertama kali ketika suatu program C dijalankan. Di belakang fungsi `main` terdapat kata kunci `int` yang menandakan return value dari fungsi tersebut bertipe `int` atau bilangan bulat.

> Catatan:
> Pembahasan mengenai fungsi dan return value akan dibahas pada pertemuan yang akan datang.

<br />

```c
printf("Hello world!");
```

Selanjutnya, kode tersebut merupakan perintah untuk memanggil fungsi `printf()`. Fungsi `printf()` sendiri merupakan fungsi bawaan C yang terdapat pada library `stdio.h`. Fungsi ini digunakan untuk mencetak/menampilkan tulisan atau angka ke dalam console/terminal (misalnya cmd pada windows). Untuk menggunakan fungsi ini, kita bisa memasukkan apa yang ingin kita cetak ke dalam parameter fungsi.

> Catatan:
> Parameter adalah variabel yang digunakan untuk menampung data yang akan dikirimkan ke dalam fungsi.

Pada kode tersebut dimasukkan sebuah parameter bertipe string (yaitu "Hello world!") pada fungsi `printf()`. Fungsi `printf()` tersebut kemudian akan mencetak parameter/data yang kita berikan ke console.

<br />

```c
return 0;
```

Kata kunci `return` digunakan untuk menghentikan sebuah fungsi (dalam kasus ini fungsi `main()`) dan mengembalikan data ke pemanggil fungsi. Karena `main()` merupakan fungsi utama, maka kata kunci `return` tersebut akan menghentikan program. Angka `0` setelah kata kunci `return` menandakan kode program. Jika suatu program berjalan dengan lancar, biasanya kode yang dipakai adalah `0`.

<br />

```c
// menambahkan library stdio.h
/*
  komentar dengan 2 atau lebih
  baris
 */
```

Kode tersebut merupakan baris komentar yang tidak akan dijalankan pada program. Kode komentar biasanya digunakan untuk menjelaskan suatu fungsi atau variabel sehingga mudah dipahami oleh developer. Terdapat 2 cara untuk menuliskan kode komentar, yaitu menggunakan `//` untuk single line comment dan menggunakan `/* ...komentar */` untuk multiline comment.

<br />

## Pengenalan Variabel

Hampir pada semua bahasa pemrograman terdapat sebuah sistem variabel. Variabel adalah suatu tempat yang digunakan untuk menampung data di dalam memori dengan nilai yang berubah-ubah selama program berjalan. Isi dari variabel dapat berubah dari waktu ke waktu sesuai dengan kebutuhan. Hal ini berbeda dengan konsep konstanta yang nilainya akan tetap dan tidak berubah hingga program selesai.

Pada bahasa C terdapat beberapa tipe variabel yang dapat digunakan. Variabel-variabel tersebut dapat dilihat seperti tabel berikut.

### Tipe Data

| Tipe Data        | Jenis Data                       | Pendefinisian                                                                    |
| ---------------- | -------------------------------- | -------------------------------------------------------------------------------- |
| Integer          | Bilangan bulat                   | `char`, `short`, `int`, `long`, `long long`                                      |
| Unsigned integer | Bilangan bulat non-negatif       | Sama seperti integer, namun diberikan imbuhan `unsigned`, contoh: `unsigned int` |
| Floating point   | Bilangan real                    | `float`, `double`                                                                |
| Structure        | Tipe data custom buatan pengguna | Buatan pengguna                                                                  |

Setiap tipe data tersebut memiliki rentang nilai yang berbeda-beda. Contohnya `char` yang dapat menyimpan -128 hingga 127, `int` yang dapat menyimpan hingga 2 milyar, dan lainnya.

Tipe data `unsigned` tidak dapat merepresentasikan bilangan negatif, namun rentang atasnya dua kali dari bilangan bulat.

Floating point dapat menyimpan bilangan real seperti `3.14`, `12.345`, `1.0`, dan lainnya.

### Pendefinisian Variabel

Variabel-variabel yang akan digunakan pada program bahasa C harus didefinisikan terlebih dahulu sebelum digunakan. Sebagai contoh, kita ingin mendefinisikan variabel bernama `jumlahApel` dan `jumlahJeruk` dengan nilai 13 dan 21. Karena 13 dan 21 merupakan bilangan bulat, maka kita bisa menggunakan tipe data `int` sehingga penulisannya adalah seperti berikut.

```c
int jumlahApel = 13;
int jumlahJeruk = 21;
```

Selain itu, kita juga bisa mendefinisikan kedua variabel tersebut dengan gaya yang berbeda seperti berikut.

```c
int jumlahApel = 13, jumlahJeruk = 21;
```

Selanjutnya, ketika kita ingin membuat sebuah variabel bernama `totalNilai` dengan nilai `3.89`, kita bisa menggunakan tipe data `float` karena nilai tersebut merupakan bilangan real dan penulisannya adalah seperti berikut.

```c
float totalNilai = 3.89;
```

<br />

## Input dan Output

Input dan output adalah cara agar program yang kita buat bisa berinteraksi dengan dunia luar, baik dengan file, program lain, atau pengguna. Untuk materi kali ini, kita hanya akan membahas input/output yang melibatkan pengguna.

### Basic Output

Salah satu contoh output yang paling sederhana adalah dengan mencetak tulisan atau angka ke console. Seperti yang telah kita bahas di awal, tentang program hello world, kita menggunakan fungsi `printf()` untuk mencetak apapun yang kita berikan ke console.

```c
printf("Hello world!\n");
printf(1234);
```

Sejauh ini, kita baru mempelajari bagaimana cara mencetak tulisan mentah atau data yang langsung kita berikan dalam bentuk string. Lalu, bagaimana jika kita ingin mencetak nilai dari sebuah variabel? Nah, caranya adalah sebagai berikut ini.

```c
#include <stdio.h>

int main() {
  char nama[16] = "Budi";
  int umur = 19;

  printf("Nama saya %s dan umur saya %d\n", nama, umur);
  return 0;
}
```

Output yang kita dapatkan di console adalah

```bash
Nama saya Budi dan umur saya 19
```

Pada contoh di atas, kita menggunakan format pada fungsi `printf()` untuk mencetak `nama` dan `umur`. Dimana nama bertipe data `char array` atau `string` dan `umur` bertipe data `int`.

Seperti yang dapat kita lihat, konstanta format `%s` dan `%d` merupakan sebuah placeholder atau sebuah tempat dari variabel yang kita berikan di sebelah kanan. `%s` berkorespondensi dengan variabel `nama` dan `%d` dengan variabel `umur`. Format untuk masing-masing tipe data dapat dilihat pada tabel berikut.

| Placeholder | Tipe Data              | Penjelasan                |
| ----------- | ---------------------- | ------------------------- |
| %s          | string atau char array | Tulisan alfanumerik       |
| %d          | integer                | angka atau bilangan bulat |
| %f          | floating point         | bilangan real             |

Contoh:

```c
#include <stdio.h>

int main() {
  char nama[16] = "Budi";
  int umur = 19;
  float nilai = 3.89;

  printf("Nama %s, umur %d tahun, dan nilai %f\n", nama, umur, nilai);
  return 0;
}
```

Output:

```bash
Nama Budi, umur 19 tahun, dan nilai 3.890000
```

### Basic Input

Selanjutnya, kita akan mempelajari bagaimana cara meminta pengguna untuk mengisi sebuah variabel yang terdapat di program kita. Perhatikan contoh kode berikut.

```c
#include <stdio.h>

int main() {
  char nama[32];
  int umur;

  printf("Masukkan nama: ");
  scanf("%s", nama);

  printf("Masukkan umur: ");
  scanf("%d", &umur);

  printf("Nama saya %s dan umur saya %d tahun\n", nama, umur);
  return 0;
}
```

Dari program tersebut, terdapat kata kunci baru, yaitu `scanf()`. Kata kunci tersebut merupakan sebuah fungsi untuk menangkap masukan/input pengguna dari console menggunakan format atau placeholder yang sama dengan fungsi `printf()`.

```c
scanf("%s", nama);
// ...
scanf("%d", &umur);
```

Kode tersebut akan menangkap masukan pengguna berupa `string` kemudian nilai tersebut akan dimasukkan ke dalam variabel `nama`. Setelah itu, kode yang berikutnya akan menangkap masukan pengguna berupa `int` kemudian nilai tersebut akan dimasukkan ke dalam variabel `umur`.

Diperlukan _ampersand_ ( `&` ) di depan variabel dengan tipe data integer/floating point.

[>> Materi Berikutnya (Algoritma, Pseudocode, dan Source Code)>>](2-AlgoritmaPseudocodeDanSourceCode.md.md)
