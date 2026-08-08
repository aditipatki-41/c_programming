#include<stdio.h>

int doublePointer()
{
    int num = 12;
    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Number : %d\n",num);
    printf("Using ptr1 : %d\n",*ptr);
    printf("Using ptr2 : %d\n",**ptr2);
}

int main()
{
    doublePointer();

    return 0;
} 