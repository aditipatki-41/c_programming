#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("data.txt", "w");

    if (file != NULL)
    {
        fprintf(file, "Hello from C!\n");
        fprintf(file, "File handling is fun.\n");

        fclose(file);
    }

    return 0;
}