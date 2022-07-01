#include <stdio.h>

int main(void) {
  int a = 10000, b = 500, c = 3;

  printf("末尾揃え\n");
  printf("Aは%5dです\n", a);
  printf("Bは%5dです\n", b);
  printf("Cは%5dです\n", c);

  printf("0表記\n");
  printf("Aは%05dです\n", a);
  printf("Bは%05dです\n", b);
  printf("Cは%05dです\n", c);

  return 0;
}