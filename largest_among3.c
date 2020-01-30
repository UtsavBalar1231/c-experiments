// to find largest among 3 numbers

#include <stdio.h>

int main ()
{
    int n1, n2, n3, largest;
    printf ("Enter the value of three numbers\n");
    scanf ("%d%d%d", &n1, &n2, &n3);

    // using the nester if else method
    if (n1 > n2) {
        if (n1 > n3)
            largest = n1;
        else
            largest = n3;
    } else {
        if (n2 > n3)
            largest = n2;
        else
            largest = n3;
    }

    printf ("%d is largest number among %d, %d and %d\n", largest, n1, n2, n3);

/*
	similarily we can use
	only if statement method
	and if else ladder method
*/

return 0;
}
