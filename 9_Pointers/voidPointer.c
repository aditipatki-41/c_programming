#include<stdio.h>

int voidPointer()
{
    int num = 12;
    void *ptr = &num;

    printf("Value : %d\n",*(int*)ptr);
}

int main()
{
    voidPointer();

    return 0;
}