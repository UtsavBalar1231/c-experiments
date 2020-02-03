#include <stdio.h>

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int i, sum = 0;

  printf("Array example 2 for addition of all the elements of an array\n");
  for(i = 0; i < 5; i++)
  {
	sum += arr[i];
  }
  printf("sum of array = %d\n", sum);
return 0;
}

