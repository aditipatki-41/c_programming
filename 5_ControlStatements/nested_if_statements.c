#include<stdio.h>

int if_else_statement_demo()
{
    int age = 40;
    int hasLicense = 1;

    printf("Age : %d\n",age);
    printf("Driving License : %d\n",hasLicense);

    if(age>18)
    {
        if(hasLicense=1)
        {
            printf("Eligible to Drive\n");
        }
        else
        {
            printf("Not eligible to Drive. Driving License required");
        }
    }
    else
    {
        printf("Not eligible to Drive\n");
    }
}
int main()
{
    if_else_statement_demo();

    return 0;
}