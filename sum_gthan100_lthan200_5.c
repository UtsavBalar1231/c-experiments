/*
 	to show th sum of all numbers between
	100-200 which are divisible by 5
*/

#include <stdio.h>

void main()
{
	int i, sum=0;

	printf("\nThe Numbers between 100 to 200 which is divisible by 5 are");

	for(i = 101; i < 200; i++) {
		if(i % 5 == 0) {
			printf("\n %d", i);
			sum += i;
			}
		}

	printf("\nSum of all numbers is %d\n", sum);
}
