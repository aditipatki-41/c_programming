#include <stdio.h>

int main(void)
{
    int length = 10;
    int width = 5;

    int area = length + width;      //logical error here

    printf("Area = %d\n", area);

    return 0;
}