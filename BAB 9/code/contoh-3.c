/*
  kode ini berisi contoh untuk menulis dan
  membaca file .bin (random access)
  - array statis
*/

#include <stdio.h>

int main() {
  const char *filename = "contoh-3.bin";

  // membuka file
  FILE *filePtr = fopen(filename, "wb");

  // validasi file
  if (filePtr == NULL) {
    printf("Gagal membuka file\n");
    return -1;
  }

  // meminta user untuk memasukkan array nilai yang
  // ingin di simpan dalam file
  printf("Masukkan nilai yang ingin disimpan\n");
  int nilai[3];
  for (int a = 0; a < 3; a++) {
    printf("Nilai ke %d > ", (a + 1));
    scanf("%d", &nilai[a]);
  }

  // menyimpan nilai ke dalam file
  // fwrite terdapat 4 parameter
  // 1. pointer variabel yang akan disimpan
  // 2. ukuran block dari variabel
  // 3. banyak block
  // 4. file pointer
  if (fwrite(nilai, sizeof(int), 3, filePtr) == 3)
    // karena hanya menyimpan 3 block integer, maka param ke-3
    // dapat diisi dengan 3
    printf("Berhasil menulis array nilai ke dalam file...\n");

  // menyimpan dan menutup file
  fclose(filePtr);

  // membaca file
  // membuka ulang file dengan izin r
  filePtr = freopen(filename, "rb", filePtr);

  // membaca file dan memasukkan datanya ke variabel
  int readNilai[3];
  if (fread(readNilai, sizeof(int), 3, filePtr) == 3)
    printf("Berhasil membaca file...\n");

  // menutup file
  fclose(filePtr);

  // menampilkan data hasil pembacaan ke console
  printf("Nilai dari file adalah: \n");
  for (int a = 0; a < 3; a++)
    printf("Nilai ke-%d: %d\n", (a + 1), readNilai[a]);

  return 0;
}
