/* Write a program to convert celsius (centigrade degree temperature to farenheit)
*/


#include <stdio.h>

float main() {
    float c = 37.0, f;
    f = ((9.0/5.0)*c) + 32;

    printf("The value in farenheit is: %f" , f);
    return 0;
}