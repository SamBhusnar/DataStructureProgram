#include <stdio.h>
int fact(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}
int main()
{
    int a;
    printf("Enter any number for finding factorial of that number\n");
    scanf("%d", &a);
    printf("factorial of given number is :\n");
    printf("%d\n", fact(a));
    //     int num = 1;
    //     if (a == 0 || a == 1)
    //     {
    //         printf("factorial of given number is :\n");

    //         printf("%d\n", 1);
    //         goto end;
    //     }
    //     else
    //     {
    //         for (int i = 2; i <= a; i++)
    //         {
    //             num *= i;
    //         }
    //         printf("factorial of given number is : \n");

    //         printf("%d\n", num);
    //     }

    // end:
    return 0;
}