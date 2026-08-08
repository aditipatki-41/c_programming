#include<stdio.h>

int constPointer()
{
    int num = 41;
    const int *ptr = &num;

    printf("Value : %d\n",*ptr);

    num = 45;

    printf("Updated value : %d\n",*ptr);
}

int main()
{
    constPointer();

    return 0;
} 