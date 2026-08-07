//character-by-character comparision without using strcmp()

#include <stdio.h>

int stringCompare()
{
    char str1[50], str2[50];
    int i = 0;

    printf("Enter first string : ");
    scanf("%49s", str1);

    printf("Enter second string : ");
    scanf("%49s", str2);

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("Strings are different.\n");
            return 0;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal.\n");
    else
        printf("Strings are different.\n");
}

int main()
{
    stringCompare();

    return 0;
}