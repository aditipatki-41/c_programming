#include <stdio.h>

int main(void)
{
    /*
     * ptr is a NULL pointer.
     *
     * It doesn't point to a valid memory location.
     */
    int *ptr = NULL;

    /*
     * BUG:
     * We are trying to write through a NULL pointer.
     *
     * This will usually cause a segmentation fault.
     */
    *ptr = 100;

    printf("Value : %d\n", *ptr);

    return 0;
}