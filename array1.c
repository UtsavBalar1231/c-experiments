#include <stdio.h>

int main()
{
  int arr[10], i;

  printf("Array example 1 with garbage values\n");
  for(i=0; i<10; i++)
  {
	printf("value of arr[%d] = %d\n", i, arr[i]);
  }

return 0;
}
