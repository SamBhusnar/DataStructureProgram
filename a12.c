#include <stdio.h>
int main()
{
    // writ a program tocompute quotient and remainder
    printf("Enter divisor and dividend\n");
    int divisor, dividend;
    scanf("%d%d", &divisor, &dividend);
    printf("The quotient is %d and remainder is %d", (dividend / divisor), (dividend % divisor));
    return 0;
}