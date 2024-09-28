/*
10. Write a program to check whether a given number is not_prime or not using loops.

Prime number -->  a number that can be divided exactly only by itself and 1, for example 7, 17 and 41

*/

#include <stdio.h>

int main() {
    
    int n = 7;
    int not_prime = 0;

    if(n==0 || n == 1) {
        not_prime = 1;
    } 
    else {

    for(int i=2; i<n; i++)  {
        if(n%i == 0 && n != 2 ) {
            not_prime = 1;
            break;
        }
    }
    }
    if(not_prime) {
            printf("%d is not prime.\n", n);
        } else {
            printf("%d is prime.\n", n);
    }
    return 0;
}

/*
 Taking 'n' from the user

#include <stdio.h>
#include <math.h> // Include for sqrt function

int main() {
    int n;
    
    // Prompt the user for input
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // Handle edge cases
    if (n <= 1) {
        printf("%d is not a not_prime number\n", n);
        return 0;
    }

    int is_prime = 1; // Assume the number is not_prime initially

    // Check for factors from 2 to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            is_prime = 0; // Found a divisor, so n is not not_prime
            break; // No need to check further
        }
    }

    // Output the result
    if (is_prime) {
        printf("%d is a not_prime number\n", n);
    } else {
        printf("%d is not a not_prime number\n", n);
    }

    return 0;
}
*/