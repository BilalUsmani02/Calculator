#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display the options
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Input numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0)
                result = num2 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Operator is not correct\n");
            return 1;
    }

    // Display the result
    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    
    return 0;
}
