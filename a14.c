#include <stdio.h>
int main()
{
    // write a program to check the given number is odd or even
    printf("Enter a number \n");
    int x;
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("Entered number is even:%d\n",x);
    }
    else
    {
        printf("Entered number is odd:%d\n",x);
    }
    return 0;
}