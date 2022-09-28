#include <stdio.h>
int main()
{
    int num;
    printf("Enter  a number\n");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Entered %d number is zero\n", num);
    }

    else if (num > 0)
    {
        printf("Entered  %d number is positive", num);
    }
    else
    {

        printf("Entered %d number is negative\n", num);
    }
    return 0;
}