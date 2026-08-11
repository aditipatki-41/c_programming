#include <stdio.h>

int main()
{
    FILE *file;
    long position;

    file = fopen("data.txt", "r");

    if (file != NULL)
    {
        position = ftell(file);
        printf("Position : %ld\n", position);

        fseek(file, 5, SEEK_SET);

        position = ftell(file);
        printf("Position : %ld\n", position);

        rewind(file);

        position = ftell(file);
        printf("Position : %ld\n", position);

        fclose(file);
    }

    return 0;
}