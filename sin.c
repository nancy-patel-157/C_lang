#include <stdio.h>
#include <math.h>

// Function to compute the sine of an angle using the Taylor series expansion
double sineSeries(double x, int terms);

int main() {
    double angle, result;
    int terms;

    // Input angle in degrees and number of terms for the series
    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);
    printf("Enter number of terms for the series: ");
    scanf("%d", &terms);

    // Convert angle to radians
    double radians = angle * (3.14/ 180.0);

    // Calculate sine using the series expansion
    result = sineSeries(radians, terms);

    // Display the result
    printf("The sine of %.2f degrees (or %.2f radians) is approximately: %.10f\n", angle, radians, result);

    return 0;
}

// Function to compute sine using the Taylor series expansion
double sineSeries(double x, int terms) {
    double result = 0.0;
    double term;
    
    for (int n = 0; n < terms; n++) {
        // Calculate the nth term in the series
        term = pow(-1, n) * pow(x, 2*n + 1) / tgamma(2*n + 2); // tgamma(n) is (n-1)!
        result += term;
    }

    return result;
}
