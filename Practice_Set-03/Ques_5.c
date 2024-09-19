/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/

#include <stdio.h>

int main() {
    char ch;   // char ch = 'a';
    printf("Enter the character \n");  
    scanf("%c", &ch);    // You can give direct any character without using scanf function
    printf("The character is %c \n", ch);
    printf("The value of character is %d \n", ch);

    // 97 - 122
    if(ch >= 97 && ch <= 122) {
        printf("The value of character is in lower case \n");
    }
    else {
        printf("The value of character is not in lower case \n");
    }
    return 0;
}