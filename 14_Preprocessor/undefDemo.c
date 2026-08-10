#include<stdio.h>

#define VALUE 100       //creates the macro

#undef VALUE            //removes that macro definination

int main()
{
    printf("Macro removed successfully\n");

    return 0;
}