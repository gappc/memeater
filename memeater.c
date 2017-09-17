#include <stdlib.h>

/*
 * Simple program that allocates memory in a loop
 * 
 * Taken from https://unix.stackexchange.com/a/136133
 *
 */
int main() {
  for (;;) {
    char* mem = malloc(4096);
    mem[0] = 1;
  };
}
