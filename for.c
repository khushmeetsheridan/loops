#include <stdio.h>

int main() {
    int i, j;

    // Generate and print multiplication table for numbers from 1 to 10
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\t", i, j, i * j);
        }
        printf("\n");
    }

    return 0;
}
