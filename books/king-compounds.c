#include <stdio.h>

#define SIZE 10
#define STR_SIZE 100

// Function declaration
void printArray(int arr[], int size);
int lenString(char arr[]);

int main(void){
  // int temp;
  // int count = 0;
  // int oddCount = 0;
  // int evenCount = 0;
  // int odds[SIZE] = {0};  // Initialize arrays to 0
  // int evens[SIZE] = {0}; // Initialize arrays to 0
  // int nums[SIZE] = {0};  // Initialize arrays to 0

  // puts("Enter up to 10 numbers: ");
  // while (scanf("%d", &temp) == 1 && count < SIZE){
  //   nums[count] = temp;
  //   count++;

  //   if (temp % 2 == 0){
  //     evens[evenCount] = temp;
  //     evenCount++;
  //   } else {
  //     odds[oddCount] = temp;
  //     oddCount++;
  //   }
  // }



  // printf("%d all nums: ", count);
  // printArray(nums, count);


  // printf("%d evens: ", evenCount);
  // printArray(evens, evenCount);

  // printf("%d odds: ", oddCount);
  // printArray(odds, oddCount);
  
  char arr[STR_SIZE];
  printf("Enter a string: ");
  fgets(arr, STR_SIZE, stdin);
  printf("Length of string: %d\n", lenString(arr));

  return 0;
}

// Function definition
void printArray(int arr[], int size){
  for (int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int lenString(char arr[]){
  int i = 0;
  while (arr[i] != '\0' && arr[i] != '\n')
  {
    i++;
  }

  return i;
}
