#include <stdio.h>

int main()
{
    FILE *file;
    int number = 100;
    int result;

    file = fopen("data.bin", "wb");

    if (file != NULL)
    {
        fwrite(&number, sizeof(int), 1, file);
        fclose(file);
    }

    file = fopen("data.bin", "rb");

    if (file != NULL)
    {
        fread(&result, sizeof(int), 1, file);

        printf("Number : %d\n", result);

        fclose(file);
    }

    return 0;
}