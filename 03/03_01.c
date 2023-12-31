#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Write a function that calculates the number of digits in an unsigned number.

int countDigits(unsigned int number) {
    int count = 0;

    if (number == 0) {
        return 1;
    }

    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
}

int main() {
    unsigned int number;
    printf("Enter an unsigned number: ");
    scanf("%u", &number);

    printf("\nThe number of digits in %u is %d.\n", number, countDigits(number));

    return 0;
}
