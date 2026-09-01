#include <stdio.h>
#include <stdlib.h>

int main(int argc, [[maybe_unused]] char *argv[argc + 1]) {
  double A[5] = {
      [0] = 9.0,
      [1] = 2.9,
      [4] = 3535353533.E+25,
      [3] = .00007,
  };

  for (size_t i = 0; i < 5; ++i) {
    int a = printf("element at %zu is %g, \tits square is %g\n", i, A[i],
                   A[i] * A[i]);

    printf(">>> [ON PRINT] %d\n", a);
  }
  return EXIT_SUCCESS;
}
