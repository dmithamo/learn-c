#include <stdio.h>

int main() {
  printf("hello, world\n");
  printf("EOF = %d\ngetchar() == EOF = %d\n", EOF, getchar() == EOF);
}
