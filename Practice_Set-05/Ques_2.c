/*
2. Write a function to convert Celsius temperature into Fahrenheit.
*/

/*
#include <stdio.h>

float c2f(float);

float c2f(float c) {
    return  (9.0 * c) / 5.0 + 32;
}
int main() {
    float c = 45;

    printf("Celsius to fahrenheit for %f is %.2f\n", c, c2f(c));
    return 0;
}

*/

// Taking input from the user

#include <stdio.h>

float c2f(float);

float c2f(float c) {
    return ((9.0*c)/5.0) + 32;
}

int main() {
    
    float c;

    printf("Enter the celsius degree : ");
    // Input from the user
    scanf("%f", &c);

    //Print the answer
    printf("Celsius to fahrenheit for %2.f is %2.f\n", c , c2f(c));
    return 0;
}