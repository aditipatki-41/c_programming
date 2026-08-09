#include<stdio.h>

struct Student
{
    int age;
    int marks;
    int grades;
};

int structDemo()
{
    struct Student student;

    printf("Sturcture declared successfully");
}

int main()
{
    structDemo();

    return 0;
}