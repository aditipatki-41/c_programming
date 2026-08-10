#include<stdio.h>

#define MAX(a,b) ((a)>(b) ? (a):(b))

int main()
{
    int x = 21;
    int y = 41;

    printf("Maximum : %d\n",MAX(x,y));

    return 0;
}