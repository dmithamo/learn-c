#include <stdio.h>

// Write a program that prints its input one word per line.
int main() {
  int c;
  int prev_was_whitespace = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (prev_was_whitespace == 0) {
        printf("\n");
      }
      prev_was_whitespace = 1;
    } else {
      prev_was_whitespace = 0;
      putchar(c);
    }
  }
  return 0;
}
