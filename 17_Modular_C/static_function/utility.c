#include <stdio.h>

static void displayMessage()
{
    printf("This function is private to utility.c\n");
}

void runUtility()
{
    displayMessage();
}