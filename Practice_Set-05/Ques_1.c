/*
1. Write a program using function to find average of three numbers.
*/

/*

#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c) {
    return (a+b+c)/3.0;
}

int main() {
    int a = 3,  b = 5,  c = 2;
    printf("The average of a , b and c is : %f\n  ", average(a, b, c));
    return 0;
}

*/

// Take input from the user 

#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c) {
    return (a+b+c)/3.0;
}

int main() {
    int a , b , c;

    printf("Enter the first number for average : ");
    scanf("%d", &a);

    printf("Enter the second number for average : ");
    scanf("%d", &b);

    printf("Enter the third number for average : ");
    scanf("%d", &c);

    // Print the result
    printf("The average of %d , %d and %d is : %f\n", a , b , c , average(a, b, c));

    return 0;
}
