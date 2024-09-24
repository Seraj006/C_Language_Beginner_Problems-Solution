/*
5. Write a program to sum first ten natural numbers using while loop.

 Write a program to implement program 5 using ‘for’ and ‘do-while’ loop
*/


/* For Loop

#include <stdio.h>

int main() {
    int sum = 0;
    // int i = 1;

     // Using a for loop to sum the first 10 natural numbers
    for (int i = 1; i <= 10; i++) {
        sum = sum + i;
    }
     // Print the result
    printf("The sum of the first 10 natural numbers using for loop is: %d\n", sum);
    return 0;
}
*/

// Do-WHile Loop

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    / Using a do while loop to sum the first 10 natural numbers
    do {
       
        sum += i;
        i++;
    } while (i <= 10);

    // Print the result
    printf("The sum of the first 10 natural numbers using do-while loop is: %d\n", sum);
    return 0;
}


/*
Take input from the user .

#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;
    int n;

    // Prompt user to enter the number of natural numbers
    printf("Enter the number of natural numbers to sum: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input! Please enter a positive integer.\n");
        return 1; // Return a non-zero value to indicate an error
    }

    // Using a do while loop to sum the first n natural numbers
    do {
        sum += i; // Add the current value of i to sum
        i++;      // Increment i
    } while (i <= n); // Continue until i exceeds n

    // Print the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Return 0 to indicate successful execution
}

*/