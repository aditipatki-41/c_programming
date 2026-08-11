#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("data.txt", "w");

    if (file != NULL)
    {
        printf("File opened successfully.\n");
        fclose(file);
    }

    return 0;
}