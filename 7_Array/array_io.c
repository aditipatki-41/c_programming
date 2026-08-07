//Array input output

#include<stdio.h>

int array_ip_op()
{
    int numbers[5];
    int i;

    printf("Enter 5 numbers :");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&numbers[i]);
    }

    printf("Array elements :");

    for(i = 0; i < 5; i++)
    {
        printf("%d",numbers[i]);
    }
}

int main()
{
    array_ip_op();

    return 0;
}