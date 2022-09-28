#include <stdio.h>
int main()
{
    long int income;
    printf("Enter you anual income in rupees\n");
    scanf("%ld", &income);
    if (income <=0 && income < 250000)
    {
        printf("You must pay  0 %c of tax", '%');
    }
    else if (income >= 250000 && income < 350000)
    {
        printf("You must pay  10 %c of tax", '%');
    }
    else if (income >= 350000 && income < 500000)
    {
        printf("You must pay  20 %c of tax", '%');
    }
    else if (income >= 500000 && income < 800000)
    {
        printf("You must pay  25 %c of tax", '%');
    }
    else
    {
        printf("You must pay 30 %c of tax", '%');
    }

    return 0;
}