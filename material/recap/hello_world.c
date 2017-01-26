#include <stdio.h>

int f() {
  int x;
  x = 42;
  return x;
}

int main() {
  int y;
  y = f();

  printf("Hello, world: %d\n", y);

  return 0;
}
