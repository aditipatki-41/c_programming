#include <stdio.h>

struct Student
{
    int age;
    float marks;
};

int structureDemo()
{
    struct Student students[2] = 
    {
        {20, 85.5},
        {21, 90.0}
    };

    for (int i = 0; i < 2; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Age   : %d\n", students[i].age);
        printf("Marks : %.2f\n\n", students[i].marks);
    }
}

int main()
{
    structureDemo();

    return 0;
}
