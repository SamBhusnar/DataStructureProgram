#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year :");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Entered year is leap year %d", year);
    }
    else
    {
        printf("Entered year is not leap year %d", year);
    }
    return 0;
}