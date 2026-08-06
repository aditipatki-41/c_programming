#include<stdio.h>

int do_while_loop_demo()
{
    int i = 1;

    do
    {
        printf("%d\n",i);
        i++;
    }
    while(i<=5);
}

int main()
{
    do_while_loop_demo();

    return 0;
}