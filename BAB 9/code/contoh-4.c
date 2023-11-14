/*
  kode ini berisi contoh untuk menulis dan
  membaca file .bin (random access)
  - array dinamis
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  const char *filename = "contoh-4.bin";

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
  // mengalokasikan 3 * int ke nilai
  int ukuranArray = 3;
  int *nilai = (int *)malloc(sizeof(int) * ukuranArray);
  for (int a = 0; a < ukuranArray; a++) {
    printf("Nilai ke %d > ", (a + 1));
    scanf("%d", &nilai[a]);
  }

  // meminta user untuk memasukkan nilai lagi
  printf("\nMasukkan nilai lagi\n");

  // mengalokasikan ulang array menjadi 5 * int (+2)
  nilai = (int *)realloc(nilai, sizeof(int) * (ukuranArray + 2));
  for (int a = 0; a < 2; a++) {
    printf("Nilai ke %d > ", (a + 1));

    // karena index ke 0, 1, 2 sudah diisi
    // maka kita isi mulai dari index ke 3, dst...
    scanf("%d", &nilai[ukuranArray + a]);
  }

  // update ukuran array setelah ditambahkan 2 data
  ukuranArray += 2;

  // cek isi array sebelum disimpan ke file
  printf("\nCek array nilai...\n");
  for (int a = 0; a < ukuranArray; a++) printf("index-%d: %d\n", a, nilai[a]);

  // menyimpan nilai ke dalam file
  // fwrite terdapat 4 parameter
  // 1. pointer variabel yang akan disimpan
  // 2. ukuran block dari variabel
  // 3. banyak block
  // 4. file pointer

  // sebelum menyimpan data, simpan ukuran array terlebih dahulu
  if (fwrite(&ukuranArray, sizeof(int), 1, filePtr) == 1)
    printf("Berhasil menyimpan ukuran array...\n");

  // setelah menyimpan ukuran array, baru kemudian simpan datanya
  if (fwrite(nilai, sizeof(int), ukuranArray, filePtr) == ukuranArray)
    printf("Berhasil menulis array nilai ke dalam file...\n");

  // menyimpan dan menutup file
  fclose(filePtr);

  // membaca file
  // membuka ulang file dengan izin r
  filePtr = freopen(filename, "rb", filePtr);

  // sebelum membaca datanya, kita harus membaca ukuran array
  // terlebih dahulu
  int readUkuranArray;
  if (fread(&readUkuranArray, sizeof(int), 1, filePtr) == 1)
    printf("\nBerhasil membaca ukuran array: %d\n", readUkuranArray);

  // selanjutnya, alokasikan memori sesuai dengan ukuran
  // yang barusan dibaca
  int *readNilai = (int *)malloc(sizeof(int) * readUkuranArray);

  // baca data dari file dan masukkan ke dalam array
  // yang barusan dialokasikan
  if (fread(readNilai, sizeof(int), readUkuranArray, filePtr) ==
      readUkuranArray)
    printf("\nBerhasil membaca data nilai...\n");

  // menutup file
  fclose(filePtr);

  // menampilkan data hasil pembacaan ke console
  printf("Nilai dari file adalah: \n");
  for (int a = 0; a < readUkuranArray; a++)
    printf("Nilai ke-%d: %d\n", (a + 1), readNilai[a]);

  return 0;
}
