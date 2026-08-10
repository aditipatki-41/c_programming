#include<stdio.h>

#define PI 3.14159      //this line creates a preprocessor macro named PI

int main()
{
    float radius = 5;
    float area = PI*radius*radius;

    printf("Area : %.2f\n",area);

    return 0;
}