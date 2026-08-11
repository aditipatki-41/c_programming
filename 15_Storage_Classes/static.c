#include <stdio.h>

int counter()
{
    static int count = 0;

    count++;

    printf("Count : %d\n",count);
}

int main()
{
    counter();
    counter();
    counter();
    
	return 0;
}