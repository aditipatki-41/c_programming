#include<stdio.h>

typedef int* IntPointer;

int main()
{
    int number = 41;
    IntPointer ptr = &number;

    printf("Value : %d\n", *ptr);

    return 0;
}