#include <stdio.h>

// Function declarations
int hcf(int a, int b);
int lcm(int a, int b);

int main() {
    int num1, num2, choice;
    float result;

    // Displaying the menu to the user
    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. HCF (Highest Common Factor)\n");
        printf("6. LCM (Least Common Multiple)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // If user chooses to exit, break the loop
        if (choice == 7) {
            printf("Exiting program...\n");
            break;
        }

        // Get the two numbers from the user
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("The sum of %d and %d is: %.2f\n", num1, num2, result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("The difference between %d and %d is: %.2f\n", num1, num2, result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("The product of %d and %d is: %.2f\n", num1, num2, result);
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = (float)num1 / num2;
                    printf("The division of %d by %d is: %.2f\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5: // HCF (Highest Common Factor)
                printf("The HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));
                break;
            case 6: // LCM (Least Common Multiple)
                printf("The LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } while (1); // Loop continues until the user chooses to exit

    return 0;
}

// Function to calculate HCF using Euclidean algorithm
int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}
