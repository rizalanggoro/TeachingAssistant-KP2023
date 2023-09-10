## Pengantar

Contoh program sederhana, pengenalan variabel, dan input/output sederhana.

### Contoh Program Sederhana

Ketika kita mulai belajar tentang bahasa pemrograman khususnya bahasa C, program yang akan teman-teman kenal pertama kali adalah _program hello world_ seperti berikut ini.

```c
// menambahkan library stdio.h
#include <stdio.h>

int main() {
  printf("Hello world!");
  return 0;
}
```

#### Memahami Program Hello World

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

### Pengenalan Variabel

### Input dan Output

```

```
