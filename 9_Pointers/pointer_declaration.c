//demonstrates declaration of pointers

#include<stdio.h>

int main()
{
    int num = 67;
    int *ptr = &num;

    printf("Value of number : %d\n",num);
    printf("Address of number : %p\n",&num);
    printf("Value pointed by ptr : %d\n",*ptr);

    return 0;
}