/*
Write a program to print multiplication table of n in reversed order.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The multiplication table of %d in reverse order is :\n", n);

    for(int i = 10; i; i--) {
        printf("%d x %d = %d\n", n , i , n * i);
    }
    return 0;
}