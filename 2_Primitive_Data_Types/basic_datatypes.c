/*
A program that demonstrates the use of data types like int, char, float, double.
Each data type printed using it's required format specifier.
*/

#include<stdio.h>

int main()
{
    int a = 5;
    char b = 'x';
    float c = 3.14f;
    double d = 8.4184;

    printf("Integer a has value = %d\n",a);     
    printf("Character b has value = %c\n",b); 
    printf("Float c has value = %f\n",c); 
    printf("Double d has value = %lf\n",d);

    return 0;
}