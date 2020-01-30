// print a multiplication table of any number entered by an user

#include <stdio.h>

int main ()
{
    int i, j = 1, num, count = 1;
    printf ("Enter the desired number for its multiplication table\n");
    scanf ("%d", &i);
    printf ("Enter the range of Multiplication\n");
    scanf ("%d", &num);
    while (count <= num) {
        printf ("%d * %d = %d\n", i, j, i * j);
        j++;
        count++;
    }
    return 0;
}
