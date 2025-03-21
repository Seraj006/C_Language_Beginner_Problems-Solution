/*
5. Write a program with a structure representing a complex number.

-----------------------------------------------------------------------
6. Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user
*/

#include <stdio.h>

typedef struct c {
    int real;
    int imaginary;
} Complex;

void display(Complex c) {
    printf("The value of Complex number is %d + %di \n", c.real, c.imaginary);
}

int main() {
    Complex carr[5];
    for(int i = 0; i < 5; i++) 
    {
        printf("Enter real part \n");
        scanf("%d", &carr[i].real);

        printf("Enter imaginary part \n");
        scanf("%d", &carr[i].imaginary);

        display(carr[i]);
    } 
    return 0;
}