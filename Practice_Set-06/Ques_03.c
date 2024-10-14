/*
3. Write a program to change the value of a variable to ten times of its current
value.
*/

/*

#include <stdio.h>

void change_to_ten_times(int*);

void change_to_ten_times(int* a) {
    *a = *a * 10;
}

int main() {

    int x = 45;
    printf("The value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("The value of x is %d\n", x);
    
    return 0;
}

*/

#include <stdio.h>

void change_2_10_times(int*);

void change_2_10_times(int* a) {
    *a = *a * 10;
}

int main() {
    int x;
    printf("Enter the value : ");
    scanf("%d", &x);

    printf("The value of x is %d\n", x);
    change_2_10_times(&x);
    printf("The value of x is %d\n", x);
    
    return 0;
}