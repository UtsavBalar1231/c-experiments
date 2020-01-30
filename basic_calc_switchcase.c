// basic calculator using switch case

#include <stdio.h>

int main() {
    char operation;
    float num1, num2, sum, sub, multi, div;

    printf("Enter the desired operation i.e (+, -, *, /): \n");
    scanf("%c", &operation);
    printf("Enter the two numbers: \n");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    div = num1 / num2;

    switch (operation) {
    case '+':
        printf("%0.1f + %0.1f = %0.1f\n", num1, num2, sum);
        break;
    case '-':
        printf("%0.1f - %0.1f = %.1lf\n", num1, num2, sub);
        break;
    case '*':
        printf("%0.1f * %0.1f = %0.1f\n", num1, num2, multi);
        break;
    case '/':
        printf("%0.1f / %0.1f = %0.1f\n", num1, num2, div);
        break;

        // if operator doesn't match any case constant
    default:
        printf("Error! operator is not correct\n");
    }

    return 0;
}

