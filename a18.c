#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two number\n");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("You entered number is % d and % d\n", a, b);
        printf("number a=%d is maximum ", a);
    }
    else if (a < b)
    {
        printf("You entered number is % d and % d\n", a, b);
        printf("number b=%d is maximum ", b);
    }
    else
    {
        printf("You entered number is % d and % d\n", a, b);
        printf("number a=%d and b=%d both are same that is zero\n", a, b);
    }

    return 0;
}