#include<stdio.h>

#define SQUARE(x)((x)*(x))      //here, SQUARE is a function-like macro

int main()
{

    int number = 5;

    printf("Square : %d\n",SQUARE(number));

    return 0;
}