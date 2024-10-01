/*
3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2
*/

#include <stdio.h>

float force(float);

float force(float mass) {
    return mass * 9.8;
}

int main() {
    float m = 45;

    

    printf("The value of force of attraction is : %f\n", force(m));
    return 0;
}