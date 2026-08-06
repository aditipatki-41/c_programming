#include<stdio.h>

int switchCase_demo()
{
    int day = 4;

    printf("Day Number : %d\n",day);

    switch(day)
    {
        case 1:
        printf("Monday\n");
        break;

        case 2:
            printf("Tuesday\n");
            break;
        
        case 3:
            printf("Wednesday\n");
            break;

        case 4:
            printf("Thursday\n");
            break;
        
        case 5:
            printf("Friday\n");
            break;
        
        case 6:
            printf("Saturday\n");
            break;
        
        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid Day Number\n");
    }
}

int main()
{
    int day;

    switchCase_demo(day);

    return 0;
}