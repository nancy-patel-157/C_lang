#include <stdio.h>

int multiply(int num1, int num2);

int main() {
    int num1, num2, result;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the multiply function
    result = multiply(num1, num2);

    // Displaying the result
    printf("The product of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

// Function to multiply two numbers without using '*' operator
int multiply(int num1, int num2) {
    int result = 0;
    int positiveNum1 = num1 > 0 ? num1 : -num1;  // Take absolute value of num1
    int positiveNum2 = num2 > 0 ? num2 : -num2;  // Take absolute value of num2
    int sign = (num1 < 0 && num2 >= 0) || (num1 >= 0 && num2 < 0) ? -1 : 1;  // Determine the sign of the result

    // Add num1 to itself num2 times
    for (int i = 0; i < positiveNum2; i++) {
        result += positiveNum1;
    }

    // Adjust the result sign based on the input signs
    return sign * result;
}
