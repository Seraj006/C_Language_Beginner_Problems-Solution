/*
4. Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/

#include <stdio.h>

int main() {
    FILE *ptr;
    char name1[30], name2[30];
    int salary1 , salary2;

    ptr = fopen("Ques_04.txt", "w");

    printf("Enter the name of 1 Employee \n");
    scanf("%s", name1);

    printf("Enter the salary of 1 Employee \n");
    scanf("%d", &salary1);

    printf("Enter the name of 2 Employee \n");
    scanf("%s", name2);

    printf("Enter the salary of 2 Employee \n");
    scanf("%d", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ",");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ",");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');

    return 0;
}