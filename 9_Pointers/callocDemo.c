//calloc() allocates memory and initializes it to zero

#include<stdio.h>
#include<stdlib.h>

int callocDemo()
{
    int *ptr;
    int i;

    ptr = calloc(5,sizeof(int));

    for(i = 0; i<5; i++)
    {
        printf("%d",ptr[i]);
    }

    free(ptr);
}

int main()
{
    callocDemo();

    return 0;
}