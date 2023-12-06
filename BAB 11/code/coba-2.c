#include <stdio.h>
#define CONC(a, b) a##b
#define TO_STRING(x) #x
#define CONC_AND_STRING(a, b) TO_STRING(a##b)

#define MACRO(x)                             \
  printf("Anda sedang menggunakan macro\n"); \
  printf("Argumen acro ini ialah " #x "\n"); \
  printf("Keluar dari macro...\n");

int main(void) {
  int CONC(man, tap) = 10;

  printf("%d\n", mantap);

  printf(CONC_AND_STRING(Hello, World));
  puts("");
  printf(TO_STRING(CONC(Hello, World)));
  puts("");

  MACRO(test);
}