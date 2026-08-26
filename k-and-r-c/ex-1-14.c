#include <stdio.h>

#define ASSUMED_CHAR_COUNT 26 // alphabetical uppercase only for naive impln.

int main() {
  printf("Enter some characters\t(A=%d\ta=%d)\n", 'A', 'a');

  int unique_chars[ASSUMED_CHAR_COUNT];
  int char_counts[ASSUMED_CHAR_COUNT];

  for (int i = 0; i < ASSUMED_CHAR_COUNT; i++) {
    unique_chars[i] = 'A' + i;
    char_counts[i] = 0;
  }

  int c;
  while ((c = getchar()) != EOF) {
    // uppercase all, rm non-alphabet
    if (c > 'Z' && c <= 'z') {
      c -= 'a' - 'A';
    }
    if (c >= 'A' && c <= 'Z') {
      for (int i = 0; i < ASSUMED_CHAR_COUNT; i++) {
        if (unique_chars[i] == c) {
          char_counts[i] += 1;
        }
      }
    }
  }

  printf("\n\nCharacter Histogram\n\n");
  for (int i = 0; i < ASSUMED_CHAR_COUNT; i++) {
    // skip unmatched chars
    if (char_counts[i] == 0) {
      continue;
    }
    printf("%c (f=%d)\t", unique_chars[i], char_counts[i]);
    for (int j = 0; j < char_counts[i]; j++) {
      printf("|");
    }
    printf("\n");
  }
  return 0;
}
