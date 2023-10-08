#include <stdio.h>

// Function to find the factorial number using recursion
long long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int number;

    printf("Enter a num: ");
    scanf("%d", &number);

    // Check for negative input and call the factorial function
    (number < 0) ? printf("Factorial is not defined for negative numbers.\n")
                : printf("Factorial of %d is %lld\n", number, factorial(number));

    return 0;
}
