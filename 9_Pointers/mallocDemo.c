// dynamic memory allocation while program is running

#include<stdio.h>
#include<stdlib.h>

int mallocDemo()
{
    int *ptr;

    ptr = malloc(sizeof(int));

    *ptr = 12;

    printf("Value : %d\n",*ptr);

    free(ptr);
}

int main()
{
    mallocDemo();

    return 0;
}