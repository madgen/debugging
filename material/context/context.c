#include <stdio.h>

extern int x;

int main(void) {
  {
    int x, i;

    for (x = 0, i = 0; i < 100; i++)
      x += i;
  }

  printf("%d\n", x);
}
