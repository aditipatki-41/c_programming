#include <stdio.h>

int operatorsDemo()
{
    int a = 20;
    printf("Initial value of a = %d\n", a);

    a += 5;
    printf("After a += 5 : %d\n", a);

    a -= 3;
    printf("After a -= 3 : %d\n", a);

    a *= 2;
    printf("After a *= 2 : %d\n", a);

    a /= 4;
    printf("After a /= 4 : %d\n", a);

    a %= 3;
    printf("After a %%= 3 : %d\n", a);
}

int main()
{
    operatorsDemo();

    return 0;
}