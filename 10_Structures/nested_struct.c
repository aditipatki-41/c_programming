#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int age;
    struct Date birthDate;
};

int structureDemo()
{
    struct Student student = 
    {
        20,
        {15, 8, 2005}
    };

    printf("Age        : %d\n", student.age);
    printf("Birth date : %d/%d/%d\n",
           student.birthDate.day,
           student.birthDate.month,
           student.birthDate.year);
}

int main()
{
    structureDemo();

    return 0;
}