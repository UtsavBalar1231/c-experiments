/**
   to find the element in the array &
   to find its array index.
 */

#include <stdio.h>

void main()
{
    int size, i, n, found;

    printf("Enter the size of Array\n");
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++) {
        printf ("Enter element #%d\n", i + 1);
        scanf ("%d", &arr[i]);
    }

    printf ("Enter the element you want to search\n");
    scanf ("%d", &n);

    for (i = 0; i < size; i++) {
        if (n == arr[i]) {
            printf ("%d is the element #%d, found at array index %d\n", n, i + 1, i);
            found = 1;
            break;
        }
    }

    if (found != 1)
        printf ("%d is not found in your array\n", n);
}
