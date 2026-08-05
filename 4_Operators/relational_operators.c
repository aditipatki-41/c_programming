#include <stdio.h>

int operatorsDemo()
{
    int a = 20;
    int b = 10;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
}

int main()
{
    operatorsDemo();

    return 0;
}
