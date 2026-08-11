#include <stdio.h>

int main()
{
    FILE *file;
    char text[100];

    file = fopen("data.txt", "w");

    if (file != NULL)
    {
        fputs("Hello from fputs!\n", file);
        fputs("File handling is getting easy.\n", file);

        fclose(file);
    }

    file = fopen("data.txt", "r");

    if (file != NULL)
    {
        while (fgets(text, sizeof(text), file) != NULL)
        {
            printf("%s", text);
        }

        fclose(file);
    }

    return 0;
}