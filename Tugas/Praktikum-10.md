# Tugas Praktikum 10

Buatlah sebuah implementasi Linked List yang mana akan selalu terurut dari kecil ke besar setiap ditambah elemen baru.

## Ketentuan Tugas

1. Terdapat sebuah implementasi Linked List yang mana akan selalu terurut dari kecil ke besar setiap ditambah elemen baru
2. Terdapat operasi menambahkan elemen baru ke Linked List
3. Dapat menampilkan isi Linked List
   
## Contoh: Selalu Terurut Setiap Ditambah Elemen Baru

```
list = [] // masih kosong

list.insert(4)
// [4]

list.insert(2)
// [2,4]

list.insert(5)
// [2,4,5]

list.insert(1)
// [1,2,4,5]

```

## Tips

- Atur kondisi ketika hendak meletakkan node (mengatur next & pointer) saat insert.

## Catatan

- Jika terbukti mencontek atau copy paste dari mahasiswa lain akan mendapat 0
- Keterlambatan pengumpulan tugas akan dikurangi 1 poin
- Jika ada yang ingin ditanyakan, silahkan bertanya kepada asisten

## Format Pengumpulan

- File source code merupakan bahasa C dengan ekstensi `.c`
- Format nama file `PKP10_NIM_NamaLengkap.c` tanpa spasi
- File tidak boleh berbentuk `.zip`, `.rar`, atau file archiver lainnya
