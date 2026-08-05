#include <stdio.h>

int operatorsDemo()
{
    int a = 20;
    int b = 10;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("(a > 10 && b < 20) : %d\n", (a > 10 && b < 20));
    printf("(a < 10 || b < 20) : %d\n", (a < 10 || b < 20));
    printf("!(a == b)          : %d\n", !(a == b));
}

int main()
{
    operatorsDemo();

    return 0;
}
