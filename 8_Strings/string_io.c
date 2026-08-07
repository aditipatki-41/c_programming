//String input output

#include<stdio.h>

int string_ip_op()
{
    char name[50];

    printf("Enter your name : ");
    scanf("%49s",name);

    printf("Your name is : %s\n",name);

}

int main()
{
    string_ip_op();

    return 0;
}