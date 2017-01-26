#include <stdio.h>

unsigned is_admissible(int i) {
  return i % 2 == 0;
}

int square(int j) {
  printf("%d ", j);

  if (j == 100) {
    printf("hello ");
  }

  return j * j;
}

int main(void) {
  int i, acc;

  for (i = 0, acc = 0; i < 200; i++)
    acc += square(i);

  printf("\n%d\n", acc);

  return 0;
}
