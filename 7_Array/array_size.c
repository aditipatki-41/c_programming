#include <stdio.h>

int arraySizeDemo()
{
    int numbers[] = {10, 20, 30, 40, 50};

    printf("Array Size: %d bytes\n", sizeof(numbers));
    printf("Number of Elements: %d\n", sizeof(numbers) / sizeof(numbers[0]));
}

int main()
{
    arraySizeDemo();

    return 0;
}
