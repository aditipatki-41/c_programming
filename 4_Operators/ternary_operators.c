#include <stdio.h>

void ternaryOperatorDemo(int a, int b)
{
    int max = (a > b) ? a : b;
    int min = (a < b) ? a : b;

    printf("First Number  : %d\n", a);
    printf("Second Number : %d\n", b);

    printf("Maximum Number : %d\n", max);
    printf("Minimum Number : %d\n", min);
}

int main()
{
    int a = 20;
    int b = 10;

    ternaryOperatorDemo(a, b);

    return 0;
}