/*

5 5 5 5 5 5 5 5 5
  4 4 4 4 4 4 4
    3 3 3 3 3
      2 2 2
        1
*/

#include <stdio.h>

int main()
{
  int i, j, k, n;
  printf("Enter the no of rows: \n");
  scanf("%d", &n);

  for(i = n; i >= 1; i--)
  {
        for(k = n - i; k >= 1; k--)
        {
                printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
                printf("%d ", i);
        }

        for(j = 2; j <= i; j++)
        {
                printf("%d ", i);
        }

  printf("\n");
  }

  return 0;
}

