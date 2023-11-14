# Tugas Praktikum 9

Buatlah sebuah program sederhana bahasa C yang mengimplementasikan materi pada praktikum pertemuan ke-9 berupa File Processing.

**Ketentuan Tugas:**

1. Terdapat sebuah Struct dengan variabel member minimal berjumlah 2, struct wajib mengandung minimal 2 tipe data yang berbeda.
2. Terdapat Array of Struct.
3. Terdapat menu/fitur berikut:<br>
   - Menambah data dari input user ke dalam array of struct, kemudian simpan array of struct tersebut ke dalam file dalam bentuk binary (menggunakan random access).<br>
   - Membaca data dari file dan memasukkan data tersebut ke dalam array of struct, kemudian tampilkan semua data dari array of struct dalam bentuk tabel (seperti yang dicontohkan pada praktikum sebelumnya)<br>

## Contoh

Perhatikan contoh kode berikut:

1. [array of int (statis)](../BAB%209/code/contoh-3.c)
2. [array of int (dinamis)](../BAB%209/code/contoh-4.c)

Contoh tersebut masih menggunakan array of int biasa, silahkan ubah dan kreasikan agar cocok dengan penggunaan struct.

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
- Format nama file `PKP09_NIM_NamaLengkap.c` tanpa spasi
- File tidak boleh berbentuk `.zip`, `.rar`, atau file archiver lainnya
