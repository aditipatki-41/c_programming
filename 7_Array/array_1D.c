//Array declaration

#include<stdio.h>

int oneDimensional_array()
{
    int numbers[5] = {10,20,30,40,50};
    int i;

    printf("Array Elements : %d\n");

    for(i = 0; i < 5; i++)
    {
        printf("Numbers[%d] = %d\n",i,numbers[i]);
    }
}

int main()
{
    oneDimensional_array();

    return 0;
}