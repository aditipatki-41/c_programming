#include<stdio.h>

enum Day
{
    MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY
};

int main()
{
    enum Day today;
    today = TUESDAY;

    printf("Day number : %d\n", today);

    return 0;
}