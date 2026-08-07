#include <stdio.h>

int stringReverse()
{
    char str[50];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%49s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    printf("Reversed String: ");

    for (i = length - 1; i >= 0; i--)       
    {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main()
{
    stringReverse();

    return 0;
}
