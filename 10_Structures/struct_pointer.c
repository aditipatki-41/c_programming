#include <stdio.h>

struct Student
{
    int age;
    float marks;
};

int structureDemo()
{
    struct Student student = {20, 85.5};
    struct Student *ptr = &student;

    printf("Age   : %d\n", ptr->age);
    printf("Marks : %.2f\n", ptr->marks);
}

int main()
{
    structureDemo();

    return 0;
}