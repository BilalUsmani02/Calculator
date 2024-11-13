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

    
    return 0;
}