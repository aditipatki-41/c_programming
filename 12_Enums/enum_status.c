#include<stdio.h>

enum State
{
    ON, OFF, ERROR
};

int main()
{
    enum State device = ON;

    if(device == ON)
    {
        printf("Device is ON\n");
    }
    else if (device == OFF)
    {
        printf("Device is OFF\n");
    }
    else
    {
        printf("Device has an Error\n");
    }
    
    return 0;
}