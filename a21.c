#include <stdio.h>
int main()
{
    // Write a program to print maximum among three numbers
    printf("Enter any three number \n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c))
    {
        printf("number a is maximum %d\n", a);
    }
    else if ((b > a) && (b > c))
    {
        printf("number b is maximum %d\n", b);
    }
    else if ((c > a) && (c > b))
    {
        printf("number c is maximum %d\n", c);
    }
    else
    {
        printf("some entered  number are same \n");
    }

    return 0;
}