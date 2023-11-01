# Tugas Praktikum 7

Buatlah sebuah program bahasa C yang mengimplementasikan array dinamis dengan konsep dynamic memory allocation dan pointer.

**Petunjuk:**

1. Buatlah minimal dua fitur, yaitu menambahkan data ke dalam array dan menampilkan semua data yang ada pada array.
2. Gunakan fungsi `malloc()` untuk mengalokasikan memori ke pointer atau array.
3. Gunakan fungsi `realloc()` untuk mengalokasikan ulang memori ke pointer atau array.

**Contoh:**

Untuk mengalokasikan memori berukuran 1 int (4 bytes) dapat menggunakan kode berikut.

```c
int *array = (int *) malloc(sizeof(int) * 1);
// atau
int *array = (int *) malloc(sizeof(int));
```

Untuk mengalokasikan ulang memori menjadi berukuran 4 int (16 bytes) dapat menggunakan kode berikut.

```c
realloc(array, sizeof(int) * 4);
```

## Contoh Sederhana

```c
// membuat array dengan konsep dma
int *array = (int *) malloc(sizeof(int));

// memasukkan 1 data ke array pada index ke-0
array[0] = 10;

// memasukkan 1 data lagi ke array pada index ke-1
/*
  karena saat ini array hanya dapat menampung maksimal 1 data, maka perlu dilakukan realokasi terlebih dahulu.
 */
realloc(array, sizeof(int) * 2);
array[1] = 12;

// memasukkan 2 data lagi ke array
realloc(array, sizeof(int) * 4);
array[2] = 14;
array[3] = 16;

// menampilkan semua data pada array
for (int a = 0; a < 4; a++) {
  printf("%d ", array[a]);
}
```

## Catatan

- Jika terbukti mencontek atau copy paste dari mahasiswa lain akan mendapat 0
- Keterlambatan pengumpulan tugas akan dikurangi 1 poin
- Jika ada yang ingin ditanyakan, silahkan bertanya kepada asisten

## Format Pengumpulan

- File source code merupakan bahasa C dengan ekstensi `.c`
- Format nama file `PKP07_NIM_NamaLengkap.c`
- File tidak boleh berbentuk `.zip`, `.rar`, atau file archiver lainnya
