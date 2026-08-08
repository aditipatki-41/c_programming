#include<stdio.h>

int pointerString()
{
    char name[] = "Adi";
    char *ptr = name;

    printf("String : %s\n",ptr);
}

int main()
{
    pointerString();

    return 0;
} 