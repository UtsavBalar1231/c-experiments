/*
        1
      2 2 2
    3 3 3 3 3
  4 4 4 4 4 4 4
5 5 5 5 5 5 5 5 5

*/

#include <stdio.h>

int main()
{
  int i, j, k, n;
  printf("Enter the no of rows: \n");
  scanf("%d", &n);

  for(i = 1; i <= n; i++)
  {
        for(k = 1; k <= n-i; k++)
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
