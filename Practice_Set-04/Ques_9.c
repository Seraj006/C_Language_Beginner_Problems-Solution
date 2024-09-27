/*
8--> Write a program to calculate the factorial of a given number using a for loop.
9. Repeat 8 using while loop.
*/

#include <stdio.h>

int main() {
    // 8! = 1 x  2 x 3 x 4 x 5 x 6 x 7 x 8 
    //5! factorial of 5 -> = 1 x  2 x 3 x 4 x 5
    // n! = 1 x  2 x 3 x 4 x 5 ....... x n
    // 0! = 1

    int product = 1;
    int n = 4;
    int i = 1;
    while (i <= n) {
        product *= i;  
        i++;
    }
    printf("The factorial is %d\n", product);
    return 0;
}