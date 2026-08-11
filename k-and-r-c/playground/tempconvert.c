#include <stdio.h>
#define UPPER_TEMP_LIMIT_C 300
#define LOWER_TEMP_LIMIT_C 0
#define STEP 20

int main() {
  // int celc, farh;
  // int low, high, step;
  //
  // low = 5;
  // high = 100;
  // step = 5;
  //
  // celc = low;
  // high = 100;
  // printf("%12s %12s\n", "Celcius", "Farenheit");
  // while (celc <= high) {
  //   printf("%12d %12.2f\n", celc, (celc * 9.0 / 5.0) + 32);
  //   celc += step;
  // }

  int celc;

  printf("%12s %12s\n", "Celcius", "Farenheit");
  for (celc = UPPER_TEMP_LIMIT_C; celc >= LOWER_TEMP_LIMIT_C; celc -= STEP) {
    printf("%12d %12.2f\n", celc, celc * 9.0 / 5.0 + 32);
  }
  return 0;
}
