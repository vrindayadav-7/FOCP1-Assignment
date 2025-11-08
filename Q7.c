#include <stdio.h>
int main() {
  
    int n = 5; 
    int i, j, space;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);   
        }

        
        space = (n - i) * 4 - 2;   
        if (space < 0)
            space = 0;
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
