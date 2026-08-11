#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("data1.txt", "a");

    if (file != NULL)
    {
        fprintf(file, "\nRushi 22 60.16\n");

        fclose(file);
    }

    return 0;
}