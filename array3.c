// largest element of an array

#include <stdio.h>

int main()
{
  int arr[5] = {101, 120, 30, 420, 5};
  int i, large;

  printf("Array example 3 for finding largest element of an array\n");

  // assume first element to be the largest
  large = arr[0];

  for(i = 0; i < 5; i++)
  {
	if(arr[i] > large)
	{
		large = arr[i];
	}
  }
  printf("The largest value is = %d\n", large);
return 0;
}
