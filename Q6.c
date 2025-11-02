#include <stdio.h>

#include <math.h>

// Function to convert Binary → Decimal
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;           
        decimal += remainder * pow(2, i); 
        ++i;
        binary /= 10;                     
    }
    return decimal;
}

// Function to convert Decimal → Binary
long long decimalToBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;

    while (decimal != 0) {
        remainder = decimal % 2;           
        decimal /= 2;                      
        binary += remainder * i;           
        i *= 10;
    }
    return binary;
}

int main() {
    int choice;
    long long binary;
    int decimal;

    printf("===== Binary ↔ Decimal Converter =====\n");
    printf("1. Convert Binary to Decimal\n");
    printf("2. Convert Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("\nEnter a binary number: ");
        scanf("%lld", &binary);
        printf("Decimal equivalent = %d\n", binaryToDecimal(binary));
    } 
    else if (choice == 2) {
        printf("\nEnter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary equivalent = %lld\n", decimalToBinary(decimal));
    } 
    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}
