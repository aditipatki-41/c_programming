//demonstrates declaration and basic use of pointers

#include<stdio.h>

int main()
{
    int num = 45;
    int *ptr = &num;

    printf("Value of number : %d\n",num);
    printf("Address of number : %p\n",&num);
    printf("Pointer stores : %p\n",ptr);
    printf("Value pointed by ptr : %d\n",*ptr);

    return 0;
}