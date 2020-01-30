// simple check for even or odd integer
// we can even use ternary operator but meh!

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the value of number ");
    scanf("%d", &num);

    if(num % 2 == 0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    return 0;
}
