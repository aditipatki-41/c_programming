#include <stdio.h>
#include "student.h"

char name[] = "Adi";
int age = 21;
float marks = 84.63;

void displayStudent(void)
{
    printf("Name : %s\n", name);
    printf("Age : %d\n", age);
    printf("Marks : %.2f\n", marks);
}