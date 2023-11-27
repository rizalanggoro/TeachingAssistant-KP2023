#include <stdio.h>

#define NILAI 12
#define ARRAY_SIZE(x) sizeof(x) / sizeof(x[0])

int main() {
  printf("Nilai: %d\n", NILAI);

  int array[] = {1, 2, 3, 4};

  printf("len: %d\n", ARRAY_SIZE(array));
  printf("len: %d\n", sizeof(array) / sizeof(array[0]));

  return 0;
}
