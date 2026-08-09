#include <stdio.h>

struct Student
{
    int age;
    float marks;
};

int structureDemo()
{
    struct Student student;

    student.age = 20;
    student.marks = 85.5;

    printf("Age   : %d\n",student.age);
    printf("Marks : %.2f\n",student.marks);
}

int main()
{
    structureDemo();

    return 0;
}