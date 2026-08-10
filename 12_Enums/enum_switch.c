#include<stdio.h>

enum Day
{
    MONDAY,TUESDAY,WEDNESDAY
};

int main()
{
    enum Day today = TUESDAY;

    switch(today)
    {
        case MONDAY:
            printf("Monday\n");
            break;

        case TUESDAY:
            printf("Tuesday\n");
            break;

        case WEDNESDAY:
            printf("Wednesday\n");
            break;
    }

    return 0;
}