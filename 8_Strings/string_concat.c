#include <stdio.h>

int stringConcatenate()
{
    char str1[100], str2[50];
    int i = 0, j = 0;

    printf("Enter first string : ");
    scanf("%99s", str1);

    printf("Enter second string : ");
    scanf("%49s", str2);

    while (str1[i] != '\0')     //find end of first string
    {
        i++;
    }

    while (str2[j] != '\0')     //copy the second string
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';     //add null character 

    printf("Concatenated String : %s\n", str1);
}

int main()
{
    stringConcatenate();

    return 0;
}