/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/

#include <stdio.h>

int main() {
    int sum = 0;
    
    for(int i = 1; i <= 10; i++) {
        sum += (8*i);  // Accumulate the sum of the multiplication table of 8
    }
    printf("The sum of the numbers occuring in the multiplication table of 8 is: %d\n", sum);
    
    return 0;
}


/*
Take input from the user
#include <stdio.h>

int main() {
    int sum = 0;
    int n;
    printf("Enter the positive number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= 10; i++) {
        sum += (n * i);
    }
    printf("The sum of the numbers occuring in the multiplication table of %d is: %d", n, sum);
    
    return 0;
}

-------------------------------------or-------------------------------------------------
#include <stdio.h>

int main() {
    int sum = 0;
    int n;
    
    // Prompt user to enter a positive number
    printf("Enter a positive number: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1; // Return a non-zero value to indicate an error
    }
    
    // Calculate the sum of the first 10 multiples of n
    for(int i = 1; i <= 10; i++) {
        sum += (n * i);
    }
    
    // Print the result
    printf("The sum of the numbers occurring in the multiplication table of %d is: %d\n", n, sum);
    
    return 0; // Return 0 to indicate successful execution
}

*/
