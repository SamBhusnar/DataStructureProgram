#include <stdio.h>
int main()
{
    float marks;
    printf("Enter your marks out of hund hundred\n");
    scanf("%f", &marks);
    if (marks >= 70)
    {
        printf("Your grade is : o \n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Your grade is : A \n");
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Your grade is : B \n");
    }
    else if (marks >= 35 && marks < 50)
    {
        printf("Your grade is : C \n");
    }
    else if (marks < 35)
    {
        printf("You are fail\n");
    }

    return 0;
}