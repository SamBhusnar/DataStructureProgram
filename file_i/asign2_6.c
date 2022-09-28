#include <stdio.h>
int main()
{
    printf("Enter nth number for to calculate sum of first n numbers.\n");
    int x;
    long long int y = 0;
    scanf("%d", &x);
    for (long long int i = 0; i <= x; i++)
    {
        y+=i; //this is good way
        // y=y+i; this is good way
        // y++; this is wrog way give an indirectally error in program
        // y=i; this is wrong way
    }
    printf("%ld", y);

    return 0;
}