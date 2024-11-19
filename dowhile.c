#include <stdio.h>

int main() {
    int number, sum = 0;

    // Use a do/while loop to calculate the sum of numbers
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);
        sum += number;
    } while (number != 0);

    printf("The total sum is: %d\n", sum);

    return 0;
}
