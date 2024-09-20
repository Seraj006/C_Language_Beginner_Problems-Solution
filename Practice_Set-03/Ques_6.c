/*
Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>

int main() {
    int a , b , c , d;
    printf("Enter the first (a) number: \n");
    scanf("%d", &a);

    printf("Enter the second (b) number: \n");
    scanf("%d", &b);

    printf("Enter the third (c) number: \n");
    scanf("%d", &c);

    printf("Enter the fourth (d) number: \n");
    scanf("%d", &d);

    if (a>b && a>c && a>d) {
        printf("The greatest of four is a\n");
    }
    else if (b>a && b>c && b>d) {
        printf("The greatest of four is b\n");
    }
    else if (c>a && c>b && a>d) {
        printf("The greatest of four is c\n");
    }
    else if(d>a && d>b && d>c) {
        printf("The greatest of four is d\n");
    }
    return 0;
}