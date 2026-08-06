#include<stdio.h>

int if_statement_demo()
{
    int age = 20;

    printf("Age : %d\n",age);

    if(age>18)
    {
        printf("Candidate eligible to Vote\n");
    }
}
int main()
{
    if_statement_demo();

    return 0;
}