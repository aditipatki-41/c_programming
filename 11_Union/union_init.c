#include<stdio.h>

union Data
{
    int number;
    float value;
    char letter;
};

int main()
{
    union Data data = {41};

    printf("Number : %d\n",data.number);

    return 0;
}