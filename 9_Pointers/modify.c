#include<stdio.h>

int pointerDemo()
{
    int num = 34;
    int *ptr = &num;

    printf("Before modification of number : %d\n",num);

    *ptr = 56;

    printf("After modification of number : %d\n",num);        
}

int main()
{
    pointerDemo();

    return 0;
}