#include <stdio.h>

int arrayInitializationDemo()
{
    int numbers[] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
}


int main()
{
    arrayInitializationDemo();
    return 0;
}