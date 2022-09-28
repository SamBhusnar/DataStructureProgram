#include <stdio.h>
int main()
{
    int primenum;
    printf("Enter any number\n");
    scanf("%d", &primenum);
    if (primenum > 0)
    {

        if (primenum % 2 != 0 && primenum % 3 != 0)
        {

            printf("Entered number is prime number: %d\n", primenum);
        }
        else
        {
            printf("Entered number is not prime number: %d\n", primenum);
        }
    }
    else if (primenum == 0)
    {
        printf("number zero is not prime \n");
    }
    else if (primenum == 1)
    {
        printf("number one  is  prime \n", primenum);
    }
    else if (primenum == 2)
    {
        printf("number two  is  prime \n", primenum);
    }

    return 0;
}
// reserch on prime number by using above logic
