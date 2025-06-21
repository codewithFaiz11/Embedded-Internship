#include<stdio.h>

int main()
{
    int a, b, i;
    float res;  // Use float to handle division results properly

    printf("Enter the First Number:\n");
    scanf("%d", &a);

    printf("Enter the Second Number:\n");
    scanf("%d", &b);

    printf("Enter the Operation to be Performed\n");
    printf("1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n");
    scanf("%d", &i);

    switch(i){
        case 1: 
            res = a + b;
            printf("Result = %.0f\n", res);
            break;
        case 2:
            res = a - b;
            printf("Result = %.0f\n", res);
            break;
        case 3:
            res = a * b;
            printf("Result = %.0f\n", res);
            break;
        case 4:
            if (b != 0)
                res = (float)a / b;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            printf("Result = %.2f\n", res);
            break;
        default:
            printf("Invalid operation selected.\n");
            return 1;
    }

    return 0;
}
