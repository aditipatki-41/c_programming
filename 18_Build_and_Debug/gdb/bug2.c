#include <stdio.h>

void update(int value)
{
    value = 100;
}

int main(void)
{
    int number = 10;

    update(number);

    printf("Number = %d\n", number);

    return 0;
}