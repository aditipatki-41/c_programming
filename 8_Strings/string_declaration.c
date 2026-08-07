//demonstrates declaration and basic use of strings

#include<stdio.h>

int stringsDemo()
{
    char name[] = "ADI";

    printf("String : %s\n",name);

    printf("Characters :\n");

    for(int i = 0; name[i] != '\0';i++)
    {
        printf("%c\n",name[i]);
    }
}

int main()
{
    stringsDemo();

    return 0;
}