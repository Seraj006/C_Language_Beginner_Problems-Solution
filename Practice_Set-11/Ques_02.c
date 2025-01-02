/*
1. Write a program to dynamically create an array of size 6 capable of storing 6
integers.

2. Use the array in problem 1 to store 6 integers entered by the user.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &ptr[i]);
    }
    printf("The Array is \n");

    for(int i = 0; i < n; i++) 
    {
        printf("%d \n", ptr[i]);
    }


    return 0;
}