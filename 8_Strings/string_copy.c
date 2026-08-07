#include<stdio.h>

int string_copy()
{
    char source[50];
    char destination[50];
    int i = 0;

    printf("Enter a string : ");
    scanf("%49s",source);

    while(source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0';      //to avoid garbage values

    printf("Original String : %s\n",source);
    printf("Copied String : %s\n",destination);
}

int main()
{
    string_copy();

    return 0;
}