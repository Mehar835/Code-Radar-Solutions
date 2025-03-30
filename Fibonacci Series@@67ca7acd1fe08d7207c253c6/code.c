#include <stdio.h>

// Function to print Fibonacci series
void fibonacciSeries(int n) {
    long long int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%lld ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    // Prompt user for input
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the fibonacciSeries function
    fibonacciSeries(n);

    return 0;
}
