/*
  kode ini berisi contoh untuk menulis dan
  membaca file .txt (sequential access)
*/

/*
  1. minta input dari console
  2. tulis input tersebut ke dalam file .txt
  3. baca file .txt tersebut dan tampilkan ke console
*/

#include <stdio.h>

int main() {
  char nama[24];
  int angkatan;

  // minta input dari console
  printf("nama > ");
  scanf("%s", nama);

  printf("angkatan > ");
  scanf("%d", &angkatan);

  // menulis input ke file .txt
  FILE *filePtr = fopen("biodata.txt", "w");
  if (filePtr == NULL) {
    printf("Gagal membuka file\n");
    return -1;
  }

  // jika berhasil membuka file
  fprintf(filePtr, "%s\n", nama);
  fprintf(filePtr, "%d\n", angkatan);

  // save file .txt
  fclose(filePtr);

  // buka ulang file, dengan izin r
  filePtr = fopen("biodata.txt", "r");
  if (filePtr == NULL) {
    printf("Gagal membuka file\n");
    return -1;
  }

  // jika ada filenya
  char readNama[24];
  int readAngkatan;

  fscanf(filePtr, "%s", readNama);
  fscanf(filePtr, "%d", &readAngkatan);

  // tampilkan ke console
  printf("Nama: %s\n", readNama);
  printf("Angkatan: %d\n", readAngkatan);

  fclose(filePtr);

  return 0;
}
