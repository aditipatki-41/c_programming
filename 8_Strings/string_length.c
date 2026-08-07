#include<stdio.h>

int string_length()
{
    char name[50];
    int length = 0;

    printf("Enter a string : ");
    scanf("%49s",name);

    while(name[length] != '\0')
    {
        length++;
    }

    printf("Length of string : %d\n",length);
}

int main()
{
    string_length();

    return 0;
}

//this prgram calculates length of string without using strlen()
//Note : scanf("%s") reads only a single word ( spaces are not included) 