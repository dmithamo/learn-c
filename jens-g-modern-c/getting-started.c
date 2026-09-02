#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char *argv[argc + 1]) {
  double A[5] = {
      [0] = 9.0,
      [1] = 2.9,
      [4] = 3535353533.E+25,
      [3] = .00007,
  };

  for (size_t i = 4; i < 5; --i) {
    printf("element at %zu is %g, \tits square is %g\n", i, A[i], A[i] * A[i]);
  }

  printf("\n");
  printf("%-20s %20s %20s %20s\n", "TYPE", "MAX", "MIN", "WIDTH");
  printf("%-20s %20zu %20zu %20zu\n", "size_t", SIZE_MAX, 0UL,
         sizeof(SIZE_MAX));

  printf("%-20s %20d %20d %20zu\n", "int", INT_MAX, INT_MIN, sizeof(INT_MAX));

  return EXIT_SUCCESS;
}
