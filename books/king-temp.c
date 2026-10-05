#include <stdio.h>

#define CM_PER_INCH 2.54

int main(void)
{
  // int age, height;
  // printf("Enter your age: ");
  // scanf("%d", &age);

  // printf("Enter your height in in: ");
  // scanf("%d", &height);

  // printf("You are %d years old and %d inches tall.\n", age, height);
  // printf("Your height in cm is %.2f.\n", (float)height * CM_PER_INCH);
  printf("|%010.2f|\n|%010.6g|\n|%010d|\n", 100.56, 0.56, 300);

  return 0;
}
