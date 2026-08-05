/*
A program that demonstrates the use of signed, unsigned, short, long.
Each data type printed using it's required format specifier.
*/

#include<stdio.h>

int main()
{
    signed int a = -5;
    unsigned int b = 5;
    
    short int c = 1000;
    unsigned short int d = 2000;

    long int e = 50000000L;
    unsigned long int f = 55000000UL;  

    printf("Signed integer= %d\n",a);     
    printf("Usigned integer = %u\n",b); 

    printf("Short integer = %hd\n",c);
    printf("Undigned Short integer = %hu\n",d); 
 
    printf("Long integer = %lu\n",e);
    printf("unsigned Long integer = %ld\n",f); 

    return 0;
}