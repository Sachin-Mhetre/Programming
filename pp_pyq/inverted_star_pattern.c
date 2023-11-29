#include <stdio.h>

int main() {
    int n = 5; // You can change this value to adjust the size of the pyramid

    for (int i = n; i >= 1; i--) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // Print asterisks
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
