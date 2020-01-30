// read the values of variables

#include <stdio.h>

int main(void)
{
	int a;
	float b;
	char c;

	printf("Enter the value for integer a\n");
	scanf(" %d", &a);
        printf("value of integer a is %d\n\n", a);

        printf("Enter the value for float b\n");
        scanf(" %f", &b);
        printf("value of integer a is %f\n\n", b);

        printf("Enter the value for character c\n");
        scanf(" %c", &c);
        printf("value of integer a is %c\n\n", c);
}
