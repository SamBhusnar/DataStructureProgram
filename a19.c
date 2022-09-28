#include <stdio.h>
int main()
{
    int y;
    printf("Enter any  year\n ");
    scanf("%d", &y);
    if ((y % 4) == 0)
    {
        printf("Entered year is leap year %d \n", y);
    }
    else
    {
        printf("Entered year is not leap year %d \n", y);
    }

    return 0;
}