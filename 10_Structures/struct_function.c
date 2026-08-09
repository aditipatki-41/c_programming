#include <stdio.h>

struct Student
{
    int age;
    float marks;
};

void display(struct Student student)
{
    printf("Age   : %d\n", student.age);
    printf("Marks : %.2f\n", student.marks);
}

int main()
{
    struct Student student = {21, 85.5};

    display(student);

    return 0;
}
