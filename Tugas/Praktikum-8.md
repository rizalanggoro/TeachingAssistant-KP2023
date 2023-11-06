# Tugas Praktikum 8

Buatlah sebuah program sederhana bahasa C yang mengimplementasikan materi pada praktikum pertemuan ke-8 berupa Print Format, Struct, dan Enum.

**Ketentuan Tugas:**

1. Terdapat sebuah Struct dengan variabel member minimal berjumlah 3, struct wajib mengandung minimal 3 tipe data yang berbeda.
2. Terdapat Array of Struct.
3. Terdapat menu berikut:<br>
   a. Menambah data dari input user ke dalam array of struct<br>
   b. Menampilkan semua data dari array of struct dalam bentuk tabel (seperti yang dicontohkan ketika praktikum tadi)<br>

5. Menggunakan Enum untuk program menu-nya

**Contoh:**

## Contoh Hasil program

```cmd
#Output
Daftar menu:
1. Masukkan data
2. Tampilkan data

#Input
1

#Output
Nama: -> Riyaldi Hasan Setiawan
Umur: -> 20
IPK : -> 5.0

#Input
1

#Output
Nama: -> Rizal D Anggoro
Umur: -> 20
IPK : -> 5.0

#Input
2

#Output
No | Nama                          | Umur | IPK  |
1  | Riyaldi Hasan Setiawan        | 20   | 5.0  |
2  | Rizal D Anggoro               | 20   | 5.0  |
```

## Tips

- Gunakan `strcpy` untuk memasukkan string ke struct
- Gunakan formatter di VSCode agar code memiliki style yang konsisten dan sesuai standar.
- Cobalah menambahkan fitur untuk menghapus / mengedit salah satu objek di array of list sebagai latihan (Tidak Wajib).

## Catatan

- Jika terbukti mencontek atau copy paste dari mahasiswa lain akan mendapat 0
- Keterlambatan pengumpulan tugas akan dikurangi 1 poin
- Jika ada yang ingin ditanyakan, silahkan bertanya kepada asisten

## Format Pengumpulan

- File source code merupakan bahasa C dengan ekstensi `.c`
- Format nama file `PKP08_NIM_NamaLengkap.c` tanpa spasi
- File tidak boleh berbentuk `.zip`, `.rar`, atau file archiver lainnya
