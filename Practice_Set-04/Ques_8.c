/*
Write a program to calculate the factorial of a given number using a for loop.
*/

#include <stdio.h>

int main() {
    // 8! = 1 x  2 x 3 x 4 x 5 x 6 x 7 x 8 
    //5! factorial of 5 -> = 1 x  2 x 3 x 4 x 5
    // n! = 1 x  2 x 3 x 4 x 5 ....... x n
    // 0! = 1

    int product = 1;
    int n = 4;
    for(int i = 1; i <= n; i++) {
        product *= i;  // or product = product * i;

    }
    printf("The factorial is %d\n", product);
    return 0;
}