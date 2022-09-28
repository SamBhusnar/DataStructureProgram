#include <stdio.h>
int main()
{
    printf("Enter any number\n");
    float x;
    scanf("%f", &x);
    if (x > 0)
    {
        printf("%0.2f is positive number", x);
    }
    else if (x == 0)
    {
        printf("%0.2f is zero number\n",x);
    }
    else
    {
        printf("%0.2f this number is negative number\n",x);
    }
    return 0;
}