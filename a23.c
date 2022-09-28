// Write a program to print grade of result by using marks use following table

#include <stdio.h>
int main()
{
    printf("Enter your marks out of 100 \n");
    float g;
    scanf("%f", &g);
    if (g >= 70)
    {
        printf("Your grade is o\n");
    }
    else if (g >= 60 && g < 70)
    {
        printf("Your grade is A");
    }
    else if (g >= 50 && g < 60)
    {
        printf("Your grade is B");
    }
    else if (g >= 35 && g < 50)
    {
        printf("Your grade is C");
    }
    else
    {

        printf("You are fail\n");
    }

    return 0;
}