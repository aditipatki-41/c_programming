#include<stdio.h>

int if_else_statement_demo()
{
    int age = 10;

    printf("Age : %d\n",age);

    if(age>18)
    {
        printf("Candidate eligible to Vote\n");
    }
    else
    {
        printf("Candidate not eligible to vote\n");
    }
}
int main()
{
    if_else_statement_demo();

    return 0;
}