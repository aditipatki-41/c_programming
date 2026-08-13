#include <stdio.h>

void update(int *ptr)
{
    /*
     * We expect ptr to point to a valid integer.
     */
    *ptr = 100;
}

int main(void)
{
    int number = 10;

    /*
     * Pass the ADDRESS of number.
     */
    update(&number);

    printf("Number : %d\n", number);

    return 0;
}