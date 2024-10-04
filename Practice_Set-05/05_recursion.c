#include <stdio.h>


int factorial(int);
//  Factorial -> 5! --> 1 x 2 x 3 x 4 x 5
// Factorial -> 4! -->  1 x 2 x 3 x 4 
//Factorial -> n! --> 1 x 2 x 3 x 4  x.... x n-1 x n
// 1 x 2 x 3 x 4 x .... x n-1

int factorial(int n) {

    if(n == 1 || n == 0) {  // Base Condition
        return 1;
    }
    // Factorial (n)! --> Factorial of (n-1) x n

return factorial(n-1) * n;   // or --> return n * factorial(n-1);
}

int main() {
    int a;   // int a = 3  // -> if you are not using scanf 
    printf("Enter the positive number : ");
    scanf("%d", &a);

    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}