#include<stdio.h>

int while_loop_demo()
{
    int i = 1;

    while(i <=5)
    {
        printf("%d\n",i);
        i++;
    }
}

int main()
{
    while_loop_demo();

    return 0;
}