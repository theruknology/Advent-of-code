#include <stdio.h>

void maxFind(int arr[], int length)
{
  for (int i = 0; i < length; i++)
  {
    printf("%i\n", arr[i]);
  }
}

int main()
{
  int nums[] = {22, 22, 33, 44};
  int length = sizeof(nums) / sizeof(nums[0]);

  maxFind(nums, length);
  
  return 0; // Added return statement to main
}
