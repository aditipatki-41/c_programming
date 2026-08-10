#include<stdio.h>

typedef struct 
{
    int age;
    float marks;    
}Student;


int main()
{
    Student student = {21,85.5};

    printf("Age : %d\n", student.age);
    printf("Marks : %.2f\n", student.marks);

    return 0;
}