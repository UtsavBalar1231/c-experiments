/*
      1
     3 5
    7 9 11
   13 15 17 19
  21 23 25 27 29
*/

#include <stdio.h>

int main()
{
  int i, j, k, n, tmp = 1;
  printf("Enter the no of rows: \n");
  scanf("%d", &n);

  for(i = 1; i <= n; i++)
  {
        for(k = 1; k <= n - i; k++)
        {
                printf(" ");
        }

        for(j = 1; j <= i; j++)
        {
                printf("%d ", tmp);
		tmp += 2;
        }

  printf("\n");
  }

  // TODO: fix alignment of 2digit character
  return 0;
}
