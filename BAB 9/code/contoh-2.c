/*
  kode ini berisi contoh untuk menulis dan
  membaca file .bin (random access)
  - variabel biasa
*/

#include <stdio.h>

int main() {
  const char *filename = "contoh-2.bin";

  // membuka file
  FILE *filePtr = fopen(filename, "wb");

  // validasi file
  if (filePtr == NULL) {
    printf("Gagal membuka file\n");
    return -1;
  }

  // meminta user untuk memasukkan nilai yang
  // ingin di simpan dalam file
  printf("Masukkan nilai yang ingin disimpan\n");
  printf("> ");

  int nilai;
  scanf("%d", &nilai);

  // menyimpan nilai ke dalam file
  // fwrite terdapat 4 parameter
  // 1. pointer variabel yang akan disimpan
  // 2. ukuran block dari variabel
  // 3. banyak block
  // 4. file pointer
  if (fwrite(&nilai, sizeof(int), 1, filePtr) == 1)
    // karena hanya menyimpan 1 block integer, maka param ke-3
    // dapat diisi dengan 1
    printf("Berhasil menulis nilai ke dalam file...\n");

  // menyimpan dan menutup file
  fclose(filePtr);

  // membaca file
  // membuka ulang file dengan izin r
  filePtr = freopen(filename, "rb", filePtr);

  // membaca file dan memasukkan datanya ke variabel
  int readNilai;
  if (fread(&readNilai, sizeof(int), 1, filePtr) == 1)
    printf("Berhasil membaca file...\n");

  // menutup file
  fclose(filePtr);

  // menampilkan data hasil pembacaan ke console
  printf("Nilai dari file adalah %d\n", readNilai);

  return 0;
}
