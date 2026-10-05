#include <stdio.h>

int main(void) {
  int num_a, den_a;
  int num_b, den_b;

  printf("Enter the first fraction: ");
  scanf("%d/%d", &num_a, &den_a);

  printf("Enter the first fraction: ");
  scanf("%d/%d", &num_b, &den_b);

  printf("Your fractions add up to %d/%d\n", num_a * den_b + num_b * den_a,
         den_a * den_b);

  return 0;
}
