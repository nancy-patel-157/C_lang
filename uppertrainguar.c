#include <stdio.h>

void main() {
    int r, c;

    // Input the number of rows and columns for the square matrix
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &r);
    c = r; // Since it's a square matrix, rows = columns

    // Declare the matrix
    int matrix[r][c];

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the upper triangular matrix
    printf("\nUpper Triangular Matrix is:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // Print only elements where j >= i (main diagonal and above)
            if (j >= i) {
                printf("%d ", matrix[i][j]);
            } else {
                printf("0 ");  // Print 0 for elements below the diagonal
            }
        }
        printf("\n");
    }
}