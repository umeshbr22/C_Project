#include <stdio.h>

factorial() {
    int n;
    unsigned long long fact = 1;  // Use unsigned long long for large results

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    printf("Factorial of %d = %llu\n", n, fact);
   // return 0;
}
