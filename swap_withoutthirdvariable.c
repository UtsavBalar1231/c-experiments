#include <stdio.h>

int main()
{
  int num1, num2;

  printf("Enter the value of Number 1\n");
  scanf("%d", &num1);

  printf("Enter the value of Number 2\n");
  scanf("%d", &num2);

  printf("Before Swapping\nNumber1 = %d\nNumber2 = %d\n", num1, num2);

// start swaping
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  printf("\nAfter Swapping\nNumber1 = %d\nNumber2 = %d\n", num1, num2);

  return 0;
}
