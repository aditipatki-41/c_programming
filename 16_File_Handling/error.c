#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("missing.txt", "r");

    if (file == NULL)
    {
        printf("File could not be opened.\n");
    }
    else
    {
        printf("File opened successfully.\n");
        fclose(file);
    }

    return 0;
}