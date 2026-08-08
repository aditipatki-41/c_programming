#include<stdio.h>

int pointerDemo()
{
    int num = 34;
    int *ptr = &num;

    printf("Value of number : %d\n",num);
    printf("Address of number : %p\n",&num);        //address of number
    printf("Pointer stores : %p\n",ptr);            // stores that address
    printf("Value pointed by ptr : %d\n",*ptr);     //dereference - value at that address
}

int main()
{
    pointerDemo();

    return 0;
}