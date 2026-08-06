#include<stdio.h>

int bitwise_operator_demo()
{
    int a = 12;
    int b = 10;

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("Bitwise AND (&) : %d\n",a&b);
    printf("Bitwise OR (|) : %d\n",a|b);
    printf("Bitwise XOR (^) : %d\n",a^b);
    printf("Bitwise NOT (~) : %d\n",~a);

    printf("Left Shift (a<<1) : %d\n",a<<1);
    printf("Right Shift (a>>1) : %d\n",a>>1);
}

int main()
{
    bitwise_operator_demo();

    return 0;
}