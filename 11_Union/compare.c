#include<stdio.h>

struct Data
{
    int number;
    float value;
    char letter;
};

union Data2
{
    int number;
    float value;
    char letter;
};

int main()
{
    struct Data d1;
    union Data2 d2;

    printf("Structure size : %zu\n",sizeof(d1));
    printf("Union size : %zu\n",sizeof(d2));

    return 0;
}