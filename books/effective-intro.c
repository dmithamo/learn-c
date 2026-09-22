#include <stdio.h>
#include <stdlib.h>

void swap(int *, int *);

int main(void) {
  int a = 0;
  int b = 1;
  printf("[BEFORE]\ta=%d, b=%d\n", a, b);
  swap(&a, &b);

  printf("[AFTER] \ta=%d, b=%d\n", a, b);
  return EXIT_SUCCESS;
}

void swap(int *a, int *b) {
  int temp = *a;

  *a = *b;
  *b = temp;
}
