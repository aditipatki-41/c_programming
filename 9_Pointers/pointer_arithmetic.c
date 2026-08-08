#include<stdio.h>

int pointerArithmeticDemo()
{
    int num[] = {10,20,30};
    int *ptr = num;

    printf("Value 1 : %d\n",*ptr);

    ptr++;
    printf("Value 2 : %d\n",*ptr);

    ptr++;
    printf("value 3 : %d\n",*ptr);            
}

int main()
{
    pointerArithmeticDemo();

    return 0;
}