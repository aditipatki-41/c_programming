#include<stdio.h>

struct Student
{
    int age;
    float marks;
    int grade;
};

int structDemo()
{
    struct Student student = {21,90.5,'A'};

    printf("Age : %d\n",student.age);
    printf("Marks : %.2f\n",student.marks);
    printf("Grade : %c\n",student.grade);

}

int main()
{
    structDemo();

    return 0;
}