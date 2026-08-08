#include<stdio.h>

int ptrFun(int *ptr)
{
    *ptr = 45;
}

int main()
{
    int num = 41;

    printf("Before : %d\n",num);

    ptrFun(&num);

    printf("After : %d\n",num);

    return 0;
}