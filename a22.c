#include <stdio.h>
int main()
{
    // Write a program to print maximum among three numbers
    printf("Enter three random number\n");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c))
    {
        printf("number a is maximum %d\n", a);
    }

    if ((b > a) && (b > c))
    {
        printf("number b is maximum %d\n", b);
    }

    if ((c > a) && (c > b))
    {
        printf("number c is maximum %d\n", c);
    }
   
    
    // critical thinking are essay things ever evolve in human
    // if ((a == b || a == c) || b == c)
    // {
    //     printf("\nsome entered  number are same %d %d %d\n ", a, b, c);
   // }

    return 0;
}