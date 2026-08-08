#include<stdio.h>

int nullPointer()
{
    int *ptr = NULL;

    if(ptr == NULL)
    {
        printf("Pointer is NULL\n");
    }
}

int main()
{
    nullPointer();

    return 0;
}