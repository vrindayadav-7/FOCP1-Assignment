#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;  

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%lld", first);

        if (i < n) printf(", ");  

        next = first + second;  
        first = second;        
        second = next;
    }

    printf("\n");
    return 0;
}
