#include <stdio.h>

int main(void) {
  // printf("hello, world\n");
  // printf("EOF = %d\ngetchar() == EOF = %d\n", EOF, getchar() == EOF);
  // puts("Hello, world!");
  int i = 0;
  printf("%1$d %1$d\n", ++i);
  printf("%1$d %1$d\n", ++i);

  while (i <= 128) {
    printf("%d ", i);
    i *= 2;
  }
}
