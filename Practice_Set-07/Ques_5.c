/*
Write a program to sum first ten natural numbers using while loop.
*/
#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    // Loop to sum the first 10 natural numbers
    while (i <= 10) {
        sum += i;  // or sum = sum + i;
        i++;
    }

    // Print the result
    printf("The sum of the first 10 natural numbers is: %d\n", sum);

    return 0;
}
