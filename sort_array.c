/**
  * C program to sort elements of array in ascending order
  */

#include <stdio.h>
#define MAX 100    // Maximum array size

int main()
{
    int arr[MAX];
    int size;
    int i, j, tmp;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d\n", &arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            /*
             * Swap the elements on ascending
             */

            if(arr[i] > arr[j])
            {
                tmp   = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    /* Print the sorted array */
    printf("\nElements of array in ascending order:\n");

    for(i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
