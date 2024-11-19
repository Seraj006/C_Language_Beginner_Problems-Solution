/*
9. Write a program to check whether a given character is present in a string or not.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char c = 'j';  
    int contains = 0;
    char str[] = "Seraj";
    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c) {
            contains = 1;
            break;
        }
    }
    if (contains) {
        printf("Yes, it contains\n");
    }
    else {
        printf("Does not contains\n");
    }
    return 0;
}