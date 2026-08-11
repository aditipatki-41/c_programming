#include <stdio.h>

int main()
{
    FILE *file;
    char name[20];
    int age;
    float marks;

    file = fopen("data1.txt", "r");

    if (file != NULL)
    {
        fscanf(file, "%s %d %f", name, &age, &marks);

        printf("Name  : %s\n", name);
        printf("Age   : %d\n", age);
        printf("Marks : %.2f\n", marks);

        fclose(file);
    }

    return 0;
}