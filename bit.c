#include <stdio.h>

// Function to count set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num) {
        num &= (num - 1); // Clear the least significant set bit
        count++;
    }
    return count;
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if all bits are unset (i.e., the number is zero)
    if (num == 0) {
        printf("All bits are unset (0).\n");
    } else {
        // Count the number of set bits (bits that are 1)
        int setBits = countSetBits(num);
        printf("The number has %d set bit(s).\n", setBits);
    }

    return 0;
}
