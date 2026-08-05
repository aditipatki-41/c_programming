#include <stdio.h>

int operatorsDemo()
{
    int a = 10;

    printf("Initial value of a = %d\n", a);

    printf("Pre-increment (++a)  : %d\n", ++a);
    printf("Current value of a   : %d\n", a);

    printf("Post-increment (a++) : %d\n", a++);
    printf("Current value of a   : %d\n", a);

    printf("Pre-decrement (--a)  : %d\n", --a);
    printf("Current value of a   : %d\n", a);

    printf("Post-decrement (a--) : %d\n", a--);
    printf("Current value of a   : %d\n", a);
}

int main()
{
    operatorsDemo();

    return 0;
}