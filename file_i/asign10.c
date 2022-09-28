#include <stdio.h>
int main()
{
    int days;
    
    printf("Enter days\n");

    scanf("%d", &days);
    printf("year: %d\n", (days/365));
    printf("week: %d\n", (days%365)/7);
    printf("days: %d\n", (days%365)%7);
    return 0;
}