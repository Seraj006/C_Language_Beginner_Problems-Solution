/*
What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);

// Output -->  6  6  4  --> when evaluation order is from right to left
// Output -->  4  5  5  --> when evaluation order is from left to right

*/
#include <stdio.h>


int main() {
   int a = 4;
printf("%d %d %d \n", a, ++a, a++);
    return 0;
}