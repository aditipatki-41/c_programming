#include<stdio.h>

typedef enum 
{
    OFF, ON, ERROR    
}State;


int main()
{
    State device = ON;

    printf("State : %d\n", device);

    return 0;
}