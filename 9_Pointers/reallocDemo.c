//relloc() - used to change the size of already allocated memory

#include <stdio.h>
#include <stdlib.h>

int resize()
{
    int *ptr;
    int i;

    ptr = malloc(3 * sizeof(int));

    for (i = 0; i < 3; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    ptr = realloc(ptr, 5 * sizeof(int));

    ptr[3] = 40;
    ptr[4] = 50;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);
}

int main()
{
    resize();

    return 0;
}