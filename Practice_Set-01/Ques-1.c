
/*
Question-1 = Write a program to calculate area of reactangle.
            a.   Using hard coded input.
            b.   Using input supplies by the input.

/* 
#include <studio.h>

int main() {
    int length = 10;
    int breadth = 5;
    
    printf("The area of the rectangle is: %d", length*breadth);

    return 0;
}
*/
 
 #include <stdio.h>
 
 int main() {
    
    int length, breadth;

    printf("Enter length\n");
    scanf("%d",&length);

    printf("Enter breadth\n");
    scanf("%d",&breadth);

    printf("The area is: %d", length*breadth);
    return 0;
 }
