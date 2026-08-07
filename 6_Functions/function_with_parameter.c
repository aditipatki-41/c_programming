//demonstrates function with parameters

#include<stdio.h>

int addNum(int a, int b)
{
    int sum = a + b;

    printf("First Number : %d\n",a);
    printf("Second Number : %d\n",b);
    printf("Sum : %d\n",sum);
}

int main()
{
    int num1 = 21;
    int num2 = 75;

    addNum(num1,num2);

    return 0;
}