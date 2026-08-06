#include<stdio.h>

int elseif_ladder_Demo()
{
    int marks = 85;

    printf("Marks : %d\n",marks);

    if(marks>=80)
    {
        printf("First class with distinction\n");
    }
    else if(marks>=60)
    {
        printf("First Class\n");
    }
    else if(marks>=40)
    {
        printf("Second Class\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    elseif_ladder_Demo();

    return 0;
}