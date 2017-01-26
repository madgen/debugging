#include <stdio.h>

void fill1(int *ints) {
  int i;

  for (i = 1; i <= 10; i++)
    ints[i-1] = i;
};

void fill2(char *args) {
  char c;
  int i = 0;

  for (c = 'A'; c <= 'L'; c++) {
    args[i++] = c;
  }
}

int main() {
  int ints[10];
  fill1(ints);

  char args[10];
  fill2(args);

  printf("%d\n", ints[0]);

  return 0;
}
