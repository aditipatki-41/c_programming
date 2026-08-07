#include<stdio.h>

int addNum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1 = 21;
    int num2 = 34;
    int sum;

    sum = addNum(num1,num2);

    printf("First Number : %d\n",num1);
    printf("Second Number : %d\n",num2);
    printf("Sum : %d\n",sum);
}