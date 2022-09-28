#include <stdio.h>
int main()
{
    printf("Enter any two number:");
    float x, y;
    scanf("%f%f", &x, &y);
    if (x > y)
    {
        printf(" %0.2f this is big than this %0.2f ", x, y);
    }

    else if (x == y)
    {
        printf("Now this %0.2f is eual to this %0.2f ", x, y);
    }
    else
    {
        printf(" %0.2f is greter than this %0.2f", y, x);
    }
    return 0;
}