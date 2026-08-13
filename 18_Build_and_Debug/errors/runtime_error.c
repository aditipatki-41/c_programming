#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 0;

    printf("%d\n", a / b);

    return 0;
}
//program will crash because theres an attempt to divide integer by 0.