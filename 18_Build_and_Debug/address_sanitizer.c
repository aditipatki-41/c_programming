#include <stdio.h>

int main(void)
{
    /*
     * The array has only 3 elements.
     * Valid indexes are:
     * 0, 1, 2
     */
    int numbers[3] = {10, 20, 30};

    /*
     * BUG:
     * numbers[3] is outside the array.
     *
     * AddressSanitizer should detect this
     * invalid memory access.
     */
    printf("Value : %d\n", numbers[3]);

    return 0;
}