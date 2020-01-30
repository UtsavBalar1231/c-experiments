#include <stdio.h>

int main(void)
{
	int side, volume;
	printf("Enter the side length of cube\n");
	scanf("%d", &side);
	volume = side * side * side;
	printf("Volume of cube of unit %d is %d cubic units\n\n", side, volume);

}
