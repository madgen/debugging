#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Packet {
  unsigned int size;
  char *load;
};

void init(struct Packet p) {
  p.size = 13;
  p.load = calloc(p.size, sizeof(char));
  memcpy(p.load, "hello, world", p.size);
}

void display(struct Packet p) {
  printf("First char: %c\n",  p.load[0]);
  printf("Second char: %c\n", p.load[1]);
  printf("Third char: %c\n",  p.load[2]);
}

int main(void) {
  struct Packet p;
  memset(&p, 0, sizeof(struct Packet));

  init(p);

  display(p);

  return 0;
}
