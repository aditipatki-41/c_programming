#include<stdio.h>

union Data
{
    int number;
    float value;
    char letter;
};

int main()
{
    union Data data;

    data.number = 21;
    printf("Number : %d\n",data.number);
    
    data.value = 90.7;
    printf("Number : %.2f\n",data.value);
    
    data.letter = 'A';
    printf("Number : %c\n",data.letter);

    return 0;
}