/*
1. Write a program to dynamically create an array of size 6 capable of storing 6
integers.

3. Solve problem 1 using calloc()
*/

/*

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int* ptr;
    ptr = (int*) calloc(n , sizeof(int));

    ptr[0] = 45;

    printf("%d \n", ptr[0]);
    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6;
    int* ptr;
    ptr = (int*) calloc(n , sizeof(int));

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