#include <stdio.h>


int subtract(int a, int b) {
    while (b != 0) 
        unsigned borrow = (~a) & b;

        a = a ^ b;

        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);

    printf("\nSubtraction (without using '-'):\n");
    printf("%d - %d = %d\n", num1, num2, result);

    return 0;
}
