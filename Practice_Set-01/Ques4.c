/* 
Question-3-== Write a program to calculate simple interest for a set of values representing  principal ,
 no. of years and rate of interest.
 */  

#include <stdio.h>

int main() {
    float principal = 34.1;
    int rate = 8;
    int time = 5;

    printf("The simple interest is: %f", (principal*rate*time)/100);
    return 0;
} 