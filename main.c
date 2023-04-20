#include <stdio.h>
#include <stdlib.h>

int main()
{

    // int age;
    // printf("Enter Your age: ");
    // scanf("%d", &age);
    // printf("You are %d years old \n", age);

    // double gpa;
    // printf("Enter Your gpa: ");
    // scanf("%lf", &gpa);
    // printf("Your gpa is %f \n", gpa);

    // char grade;
    // printf("Enter Your grade: ");
    // scanf("%c", &grade);
    // printf("Your grade is %c \n", grade);

    // char name[20];
    // printf("Enter Your name: ");
    // scanf("%s", name);
    // printf("Your name is %s \n", name);

    char name[20];
    printf("Enter Your name: ");
    fgets(name, 20, stdin);
    printf("Your name is %s \n", name);

    return 0;
}
