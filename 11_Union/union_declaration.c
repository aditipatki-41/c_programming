#include<stdio.h>

union Data
{
    int number;
    float value;
    char letter;
};

int main()
{
    union Data data;

    printf("Union declared successfully.\n");

    return 0;
}