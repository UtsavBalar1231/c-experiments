#include <stdio.h>

int main(void)
{
	int num1, num2, sum, sub, multi;
	float div;

	printf("Enter the value of number 1\n");
	scanf("%d", &num1);

	printf("Enter the value of number 2\n");
        scanf("%d", &num2);
	// addition
	sum = num1 + num2;
	printf("The Addition of %d + %d is %d\n\n", num1, num2, sum);
        // subtraction
        sub = num1 - num2;
        printf("The Subtraction of %d - %d is %d\n\n", num1, num2, sub);
        // multiplication
        multi = num1 * num2;
        printf("The Addition of %d * %d is %d\n\n", num1, num2, multi);
        // division
        div = num1 / num2;
        printf("The Division of %d / %d is %f\n\n", num1, num2, div);
}
