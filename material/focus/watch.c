#include <stdlib.h>

int meaning_of_life;

void pointer_init(int **p) {
  *p = malloc(sizeof(int));
}

int error_check(int **p) {
  if (meaning_of_life != 42) {
    *p = 0;
    return -1;
  }

  return 0;
}

int read_pointer(int *p) {
  return *p;
}

int main(void) {
  int *p;
  meaning_of_life = 0;

  pointer_init(&p);

  /* DO STUFF WITH POINTER */
  error_check(&p);
  /* DO STUFF WITH POINTER */

  read_pointer(p);

  return 0;
}
